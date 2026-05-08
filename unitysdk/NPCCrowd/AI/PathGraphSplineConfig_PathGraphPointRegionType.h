#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionType_TypeDefinitionIndex = 78190;

	enum class PathGraphSplineConfig_PathGraphPointRegionType : ::System::Int32
	{
		Slope = 2,
		Stair = 1,
		StairTransition = 3,
		FlatGround = 0,
	};
}
