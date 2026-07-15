#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfCustomerAnimatorState_TypeDefinitionIndex = 17773;

	enum class ElfCustomerAnimatorState : ::System::Int32
	{
		Unknown = 0,
		Idle = 1,
		Walk = 2,
		Sit = 3,
		Eat = 4,
		Happy = 5,
		Angry = 6,
		SitUp = 7,
		Operation = 8,
	};
}
