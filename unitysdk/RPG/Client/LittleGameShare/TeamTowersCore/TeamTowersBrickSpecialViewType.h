#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersBrickSpecialViewType_TypeDefinitionIndex = 35531;

	enum class TeamTowersBrickSpecialViewType : ::System::Byte
	{
		None = 0x0,
		Locked = 0x1,
		Ice = 0x2,
		Stone = 0x4,
		Ivy = 0x8,
		IvyFinished = 0x10,
		Island = 0x20,
		Solid = 0x40,
		SilverWolf = 0x80,
	};
}
