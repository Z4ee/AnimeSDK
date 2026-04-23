#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleRightInfoMode_TypeDefinitionIndex = 66575;

	enum class GridFightBattleRightInfoMode : ::System::Int32
	{
		TraitDetail = 0,
		DamageDetail = 1,
		TraitMini = 2,
		DamageMini = 3,
	};
}
