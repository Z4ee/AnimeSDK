#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenCountingChimeraMiniGame_HipplenGuessAnswerType_TypeDefinitionIndex = 69644;

	enum class HipplenCountingChimeraMiniGame_HipplenGuessAnswerType : ::System::Int32
	{
		Correct = 0,
		Approximately = 1,
		Worst = 2,
	};
}
