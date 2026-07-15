#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaiterState_TypeDefinitionIndex = 17776;

	enum class ElfWaiterState : ::System::Int32
	{
		Unknown = 0,
		Wait = 1,
		Sleep = 2,
		Delivery = 3,
		Cleaning = 4,
		CleaningObstacle = 5,
		ProcessEvent = 6,
		TimeOverPerform = 7,
		SuperEvent = 8,
	};
}
