#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AwaitDeathProcessState_TypeDefinitionIndex = 53700;

	enum class AwaitDeathProcessState : ::System::Int32
	{
		AwaitKiller = 0,
		AwaitDeath = 1,
	};
}
