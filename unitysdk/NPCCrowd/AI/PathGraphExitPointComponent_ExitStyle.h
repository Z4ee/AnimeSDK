#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointComponent_ExitStyle_TypeDefinitionIndex = 74248;

	enum class PathGraphExitPointComponent_ExitStyle : ::System::Int32
	{
		ExitAtSplineEndPoint = 1,
		MoveFromSplineEndPoint = 4,
		MoveFromSplineStartPoint = 3,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineStartPoint = 0,
		ExitAtSplineNearestPoint = 2,
		MoveBlendWithSplinePoints = 6,
	};
}
