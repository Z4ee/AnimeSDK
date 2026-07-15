#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AirlockEvent_TypeDefinitionIndex = 54928;

	enum class AirlockEvent : ::System::Int32
	{
		EnterFromA = 0,
		EnterFromB = 1,
		LeaveFromAToA = 2,
		LeaveFromAToB = 3,
		LeaveFromBToA = 4,
		LeaveFromBToB = 5,
	};
}
