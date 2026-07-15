#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaiterAnimatorState_TypeDefinitionIndex = 17772;

	enum class ElfWaiterAnimatorState : ::System::Int32
	{
		Unknown = 0,
		Idle = 1,
		Walk = 2,
		Delivery = 3,
		Clean = 4,
		Putdown = 5,
		Sleep = 6,
		Happy = 7,
	};
}
