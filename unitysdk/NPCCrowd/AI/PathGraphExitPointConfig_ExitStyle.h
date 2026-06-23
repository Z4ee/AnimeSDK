#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointConfig_ExitStyle_TypeDefinitionIndex = 56989;

	enum class PathGraphExitPointConfig_ExitStyle : ::System::Int32
	{
		ExitAtSplineNearestPoint = 2,
		ExitAtSplineEndPoint = 1,
		MoveFromSplineStartPoint = 3,
		MoveFromSplineEndPoint = 4,
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineStartPoint = 0,
	};
}
