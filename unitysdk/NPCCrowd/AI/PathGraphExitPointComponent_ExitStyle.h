#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointComponent_ExitStyle_TypeDefinitionIndex = 59572;

	enum class PathGraphExitPointComponent_ExitStyle : ::System::Int32
	{
		MoveFromSplineStartPoint = 3,
		ExitAtSplineNearestPoint = 2,
		ExitAtSplineEndPoint = 1,
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineEndPoint = 4,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineStartPoint = 0,
	};
}
