#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_SpawnStyle_TypeDefinitionIndex = 39629;

	enum class PathGraphSpawnPointComponent_SpawnStyle : ::System::Int32
	{
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineStartPoint = 0,
		TeleportToSplineEndPoint = 1,
		MoveToSplineStartPoint = 3,
		MoveToSplineEndPoint = 4,
		MoveToSplineNearestPoint = 5,
		TeleportToSplineNearestPoint = 2,
	};
}
