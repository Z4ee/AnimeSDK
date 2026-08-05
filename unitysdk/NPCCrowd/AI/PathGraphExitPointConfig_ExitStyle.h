#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointConfig_ExitStyle_TypeDefinitionIndex = 75850;

	enum class PathGraphExitPointConfig_ExitStyle : ::System::Int32
	{
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineEndPoint = 4,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineEndPoint = 1,
		MoveFromSplineStartPoint = 3,
		ExitAtSplineStartPoint = 0,
		ExitAtSplineNearestPoint = 2,
	};
}
