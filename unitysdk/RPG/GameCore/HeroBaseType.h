#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeroBaseType_TypeDefinitionIndex = 19205;

	enum class HeroBaseType : ::System::Int32
	{
		BoyWarrior = 8001,
		GirlWarrior = 8002,
		BoyKnight = 8003,
		GirlKnight = 8004,
	};
}
