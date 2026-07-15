#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindTargetType_TypeDefinitionIndex = 58080;

	enum class TimeRewindTargetType : ::System::Int32
	{
		SingleTarget = 0,
		FoundationAndBall = 1,
		DestructibleBridge = 2,
		ContainerAndSeed = 3,
		PerformanceSplitObject = 4,
	};
}
