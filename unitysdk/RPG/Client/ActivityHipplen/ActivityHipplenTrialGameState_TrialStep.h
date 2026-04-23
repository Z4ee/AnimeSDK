#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenTrialGameState_TrialStep_TypeDefinitionIndex = 69588;

	enum class ActivityHipplenTrialGameState_TrialStep : ::System::Int32
	{
		StandBy = 0,
		MiniGame = 1,
		Ending = 2,
		Finished = 3,
		Invalid = 4,
	};
}
