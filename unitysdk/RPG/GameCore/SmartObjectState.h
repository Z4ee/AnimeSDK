#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SmartObjectState_TypeDefinitionIndex = 49743;

	enum class SmartObjectState : ::System::Int32
	{
		Free = 0,
		Occupied = 1,
		Disabled = 2,
	};
}
