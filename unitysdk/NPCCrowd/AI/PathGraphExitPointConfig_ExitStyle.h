#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointConfig_ExitStyle_TypeDefinitionIndex = 65574;

	enum class PathGraphExitPointConfig_ExitStyle : ::System::Int32
	{
		MoveBlendWithSplinePoints = 6,
		ExitAtSplineEndPoint = 1,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineNearestPoint = 2,
		MoveFromSplineStartPoint = 3,
		MoveFromSplineEndPoint = 4,
		ExitAtSplineStartPoint = 0,
	};
}
