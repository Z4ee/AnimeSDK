#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointComponent_ExitStyle_TypeDefinitionIndex = 53020;

	enum class PathGraphExitPointComponent_ExitStyle : ::System::Int32
	{
		ExitAtSplineEndPoint = 1,
		ExitAtSplineNearestPoint = 2,
		MoveFromSplineNearestPoint = 5,
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineEndPoint = 4,
		MoveFromSplineStartPoint = 3,
		ExitAtSplineStartPoint = 0,
	};
}
