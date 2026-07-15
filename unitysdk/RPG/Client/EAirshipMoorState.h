#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EAirshipMoorState_TypeDefinitionIndex = 57122;

	enum class EAirshipMoorState : ::System::Int32
	{
		None = 0,
		Mooring = 1,
	};
}
