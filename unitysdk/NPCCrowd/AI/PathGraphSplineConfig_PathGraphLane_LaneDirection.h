#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphLane_LaneDirection_TypeDefinitionIndex = 53546;

	enum class PathGraphSplineConfig_PathGraphLane_LaneDirection : ::System::Int32
	{
		Forward = 1,
		Bidirectional = 3,
		Backward = 2,
	};
}
