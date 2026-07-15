#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleAbilityTag_TypeDefinitionIndex = 15217;

	enum class ChimeraBattleAbilityTag : ::System::Int32
	{
		None = 0,
		Heal = 1,
		SpeAttack = 2,
		Buff = 3,
	};
}
