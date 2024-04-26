#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*The srand(time(0)) will seed the random generator different values
 * each time the program is executed. 
*/

int main()
{

	int num;
	int guess=-1;
	int i = 0;

	num = rand() % 1001; // num in the range of 0 to 1000

	printf("guess my number.\n");
	srand(time(0)); // Seeding the random generator to the current time

	// The program will stay in the while loop until the user has guessed correctly
	while (guess != num)
	{
		scanf_s("%d", &guess);
		if (guess < num)
			printf("Too low, try again.\n");
		if (guess > num)
			printf("Too high, try again.\n");
		i++;
		printf("# of guesses: %d\n", i);
	}

	// Depending on the number of guessing, a certain message will appear.
	if (i <= 10)
		printf("You are lucky, or you know the secret.");
	else
		printf("Good guess.");

	return 0;
}
