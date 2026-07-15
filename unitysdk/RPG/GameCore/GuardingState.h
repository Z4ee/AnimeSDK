#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuardingState_TypeDefinitionIndex = 50039;

	enum class GuardingState : ::System::Int32
	{
		Search = 0,
		GuardAtTarget = 1,
	};
}
