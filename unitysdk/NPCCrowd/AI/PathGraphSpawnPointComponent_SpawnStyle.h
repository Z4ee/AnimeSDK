#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_SpawnStyle_TypeDefinitionIndex = 38193;

	enum class PathGraphSpawnPointComponent_SpawnStyle : ::System::Int32
	{
		MoveToSplineStartPoint = 3,
		MoveToSplineNearestPoint = 5,
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineNearestPoint = 2,
		MoveToSplineEndPoint = 4,
		TeleportToSplineEndPoint = 1,
		TeleportToSplineStartPoint = 0,
	};
}
