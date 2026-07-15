#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMoveAlongPathStatus_TypeDefinitionIndex = 50067;

	enum class AdvNpcMoveAlongPathStatus : ::System::Int32
	{
		Moving = 0,
		OnWaypoint = 1,
		Idle = 2,
	};
}
