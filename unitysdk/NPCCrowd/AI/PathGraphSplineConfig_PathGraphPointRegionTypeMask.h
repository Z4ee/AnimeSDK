#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionTypeMask_TypeDefinitionIndex = 76884;

	enum class PathGraphSplineConfig_PathGraphPointRegionTypeMask : ::System::Int32
	{
		DownwardSlope = 32,
		FlatGround = 1,
		StairTransition = 8,
		Slope = 4,
		UpwardSlope = 16,
		TurnRight = 128,
		Stair = 2,
		None = 0,
		TurnLeft = 64,
	};
}
