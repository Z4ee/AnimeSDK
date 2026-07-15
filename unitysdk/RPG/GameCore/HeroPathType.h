#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeroPathType_TypeDefinitionIndex = 10126;

	enum class HeroPathType : ::System::Int32
	{
		Unknown = 0,
		Warrior = 190,
		Rogue = 191,
		Mage = 192,
		Shaman = 193,
		Warlock = 194,
		Knight = 195,
		Priest = 196,
	};
}
