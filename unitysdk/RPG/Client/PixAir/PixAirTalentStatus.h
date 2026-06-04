#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTalentStatus_TypeDefinitionIndex = 73700;

	enum class PixAirTalentStatus : ::System::Int32
	{
		Locked = 0,
		Unlockable = 1,
		Unlocked = 2,
	};
}
