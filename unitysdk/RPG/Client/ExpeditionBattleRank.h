#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRank_TypeDefinitionIndex = 63908;

	enum class ExpeditionBattleRank : ::System::Int32
	{
		B = 0,
		A = 1,
		S = 2,
		SS = 3,
		SSS = 4,
	};
}
