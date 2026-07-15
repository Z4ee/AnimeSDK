#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakRewardState_TypeDefinitionIndex = 60396;

	enum class ChallengePeakRewardState : ::System::Int32
	{
		None = 0,
		InProgress = 1,
		CanTake = 2,
		Taken = 3,
	};
}
