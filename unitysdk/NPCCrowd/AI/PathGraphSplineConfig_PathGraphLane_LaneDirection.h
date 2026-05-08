#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphLane_LaneDirection_TypeDefinitionIndex = 78192;

	enum class PathGraphSplineConfig_PathGraphLane_LaneDirection : ::System::Int32
	{
		Backward = 2,
		Forward = 1,
		Bidirectional = 3,
	};
}
