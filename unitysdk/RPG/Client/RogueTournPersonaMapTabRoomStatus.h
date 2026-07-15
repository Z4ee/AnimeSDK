#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaMapTabRoomStatus_TypeDefinitionIndex = 69592;

	enum class RogueTournPersonaMapTabRoomStatus : ::System::Int32
	{
		None = 0,
		Passed = 1,
		Current = 2,
		Unreached = 3,
	};
}
