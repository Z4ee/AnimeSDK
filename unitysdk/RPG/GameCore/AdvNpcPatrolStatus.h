#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcPatrolStatus_TypeDefinitionIndex = 42447;

	enum class AdvNpcPatrolStatus : ::System::Int32
	{
		Walking = 0,
		OnWaypoint = 1,
		Idle = 2,
	};
}
