#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSmartObjectType_TypeDefinitionIndex = 18129;

	enum class LittleGameSmartObjectType : ::System::Int32
	{
		UnDefined = 0,
		ElfTable = 1,
		ElfWaiterQueue = 2,
		ElfCustomerQueue = 3,
		ElfFoodQueue = 4,
		ElfChefQueue = 5,
		ElfTimeOverPoint = 6,
		ElfBirthdayQueue = 7,
		ElfSuperChefQueue = 8,
		ElfDancingQueue = 9,
	};
}
