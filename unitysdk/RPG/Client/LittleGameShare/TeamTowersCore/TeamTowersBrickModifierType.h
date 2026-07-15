#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersBrickModifierType_TypeDefinitionIndex = 35625;

	enum class TeamTowersBrickModifierType : ::System::Byte
	{
		None = 0x0,
		Stone = 0x1,
		Ivy = 0x2,
	};
}
