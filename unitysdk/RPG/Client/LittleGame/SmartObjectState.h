#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SmartObjectState_TypeDefinitionIndex = 39547;

	enum class SmartObjectState : ::System::Int32
	{
		Free = 0,
		Occupied = 1,
		Disabled = 2,
	};
}
