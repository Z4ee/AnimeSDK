#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseTypeMask_TypeDefinitionIndex = 10083;

	enum class AvatarBaseTypeMask : ::System::UInt32
	{
		None = 0x0,
		Warrior = 0x2,
		Rogue = 0x4,
		Mage = 0x8,
		Shaman = 0x10,
		Warlock = 0x20,
		Knight = 0x40,
		Priest = 0x80,
		Memory = 0x100,
		Elation = 0x200,
		All = 0x3FE,
	};
}
