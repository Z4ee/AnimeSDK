#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleAffiliationType_TypeDefinitionIndex = 65823;

	enum class MarbleBattleAffiliationType : ::System::Int32
	{
		Self = 0,
		Ally = 1,
		Enemy = 2,
	};
}
