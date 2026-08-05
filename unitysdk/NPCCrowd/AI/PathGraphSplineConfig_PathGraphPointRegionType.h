#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionType_TypeDefinitionIndex = 76879;

	enum class PathGraphSplineConfig_PathGraphPointRegionType : ::System::Int32
	{
		StairTransition = 3,
		Stair = 1,
		BumpyGround = 4,
		Slope = 2,
		FlatGround = 0,
	};
}
