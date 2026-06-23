#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionType_TypeDefinitionIndex = 53544;

	enum class PathGraphSplineConfig_PathGraphPointRegionType : ::System::Int32
	{
		Stair = 1,
		Slope = 2,
		StairTransition = 3,
		BumpyGround = 4,
		FlatGround = 0,
	};
}
