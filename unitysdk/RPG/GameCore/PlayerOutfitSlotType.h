#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitSlotType_TypeDefinitionIndex = 10226;

	enum class PlayerOutfitSlotType : ::System::Int32
	{
		None = 0,
		Coat = 1,
		HeadDecor = 11,
		BackDecor = 13,
		Weapon_Warrior = 21,
		Weapon_Shaman = 24,
		Weapon_Knight = 26,
		Weapon_Memory = 28,
		Weapon_Elation = 29,
	};
}
