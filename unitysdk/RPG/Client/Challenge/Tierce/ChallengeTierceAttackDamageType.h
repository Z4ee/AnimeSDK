#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceAttackDamageType_TypeDefinitionIndex = 80129;

	enum class ChallengeTierceAttackDamageType : ::System::Int32
	{
		Unknow = 0,
		Physical = 1,
		Fire = 2,
		Ice = 4,
		Thunder = 8,
		Wind = 16,
		Quantum = 32,
		Imaginary = 64,
		Heal = 128,
		AllType = 255,
	};
}
