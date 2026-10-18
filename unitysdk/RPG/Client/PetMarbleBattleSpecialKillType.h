#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBattleSpecialKillType_TypeDefinitionIndex = 65826;

	enum class PetMarbleBattleSpecialKillType : ::System::Int32
	{
		FirstBlood = 0,
		SingleKill = 1,
		DoubleKill = 2,
		TripleKill = 3,
		QuadraKill = 4,
	};
}
