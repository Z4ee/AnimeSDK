#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleShowDetailType_TypeDefinitionIndex = 59181;

	enum class GridFightBattleShowDetailType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Trait = 2,
		Equip = 3,
		Consumable = 4,
		HP = 5,
		Coin = 6,
	};
}
