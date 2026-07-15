#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleSpecialKillType_TypeDefinitionIndex = 62894;

	enum class MarbleBattleSpecialKillType : ::System::Int32
	{
		Normal = 0,
		FirstBlood = 1,
		DoubleKill = 2,
		TripleKill = 3,
	};
}
