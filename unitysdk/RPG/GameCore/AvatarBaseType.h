#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseType_TypeDefinitionIndex = 10082;

	enum class AvatarBaseType : ::System::Int32
	{
		Unknown = 0,
		Warrior = 1,
		Rogue = 2,
		Mage = 3,
		Shaman = 4,
		Warlock = 5,
		Knight = 6,
		Priest = 7,
		Memory = 8,
		Elation = 9,
		_Count = 10,
	};
}
