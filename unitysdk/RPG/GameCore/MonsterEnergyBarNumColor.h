#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarNumColor_TypeDefinitionIndex = 23900;

	enum class MonsterEnergyBarNumColor : ::System::Int32
	{
		Keep = 0,
		Normal = 1,
		Golden = 2,
	};
}
