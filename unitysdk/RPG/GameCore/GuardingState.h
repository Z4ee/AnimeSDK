#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuardingState_TypeDefinitionIndex = 42439;

	enum class GuardingState : ::System::Int32
	{
		Search = 0,
		GuardAtTarget = 1,
	};
}
