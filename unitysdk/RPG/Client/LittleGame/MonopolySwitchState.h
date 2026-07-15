#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonopolySwitchState_TypeDefinitionIndex = 40386;

	enum class MonopolySwitchState : ::System::Int32
	{
		None = 0,
		WaitForSwitch = 1,
		Switching = 2,
		Switched = 3,
	};
}
