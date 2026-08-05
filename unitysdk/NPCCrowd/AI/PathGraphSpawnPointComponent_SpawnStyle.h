#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_SpawnStyle_TypeDefinitionIndex = 42346;

	enum class PathGraphSpawnPointComponent_SpawnStyle : ::System::Int32
	{
		TeleportToSplineStartPoint = 0,
		MoveToSplineNearestPoint = 5,
		MoveToSplineStartPoint = 3,
		TeleportToSplineNearestPoint = 2,
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineEndPoint = 1,
		MoveToSplineEndPoint = 4,
	};
}
