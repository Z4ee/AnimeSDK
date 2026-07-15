#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipTag_TypeDefinitionIndex = 10046;

	enum class PixAirEquipTag : ::System::Int32
	{
		None = 0,
		Damage = 1,
		Burn = 2,
		Shield = 3,
		Haste = 4,
		Jam = 5,
		Charge = 6,
		Machine = 7,
		Hack = 8,
		Laser = 9,
		Toy = 10,
		Large = 11,
		Comic = 12,
		Food = 13,
		Small = 14,
		Core = 15,
	};
}
