#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatShopGoodType_TypeDefinitionIndex = 61925;

	enum class DiceCombatShopGoodType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Dice = 2,
	};
}
