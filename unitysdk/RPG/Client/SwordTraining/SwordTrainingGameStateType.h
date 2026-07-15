#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingGameStateType_TypeDefinitionIndex = 71425;

	enum class SwordTrainingGameStateType : ::System::Int32
	{
		None = 0,
		Training = 1,
		Process = 2,
		Story = 3,
		Exam = 4,
		TurnSettle = 5,
		SelectEnding = 6,
		Ending = 7,
		ExamOver = 8,
		RestoreGame = 9,
		Settle = 10,
		WaitGameSettle = 11,
		ResumeGame = 12,
	};
}
