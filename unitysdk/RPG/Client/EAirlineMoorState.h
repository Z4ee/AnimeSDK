#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EAirlineMoorState_TypeDefinitionIndex = 57111;

	enum class EAirlineMoorState : ::System::Int32
	{
		None = 0,
		MooringEnter = 1,
		EnterStation = 2,
		Wait = 3,
		ExitStation = 4,
		MooringExit = 5,
	};
}
