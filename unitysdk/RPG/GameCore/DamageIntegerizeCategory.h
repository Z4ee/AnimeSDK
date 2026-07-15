#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageIntegerizeCategory_TypeDefinitionIndex = 23768;

	enum class DamageIntegerizeCategory : ::System::Int32
	{
		None = 0,
		RoundDamage = 1,
		FloorDamage = 2,
		CeilDamage = 3,
		RoundLeftHP = 4,
		FloorLeftHP = 5,
		CeilLeftHP = 6,
	};
}
