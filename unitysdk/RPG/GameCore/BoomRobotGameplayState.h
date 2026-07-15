#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayState_TypeDefinitionIndex = 50154;

	enum class BoomRobotGameplayState : ::System::Int32
	{
		None = 0,
		Initialzed = 1,
		Started = 2,
		BoomPerformance = 3,
		FoundPerformance = 4,
		SuccessPerformance = 5,
		FailPerformance = 6,
	};
}
