#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionTypeMask_TypeDefinitionIndex = 53543;

	enum class PathGraphSplineConfig_PathGraphPointRegionTypeMask : ::System::Int32
	{
		DownwardSlope = 32,
		UpwardSlope = 16,
		Stair = 2,
		TurnRight = 128,
		TurnLeft = 64,
		StairTransition = 8,
		Slope = 4,
		FlatGround = 1,
		None = 0,
	};
}
