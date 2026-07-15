#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindTimeRewindMultiControlType_TypeDefinitionIndex = 16858;

	enum class BindTimeRewindMultiControlType : ::System::Int32
	{
		None = 0,
		FoundationAndBall = 1,
		DestructibleBridge = 2,
		ContainerAndSeed = 3,
		PerformanceSplitObject = 4,
	};
}
