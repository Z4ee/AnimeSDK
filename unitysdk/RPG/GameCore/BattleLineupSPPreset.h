#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupSPPreset_TypeDefinitionIndex = 17409;

	enum class BattleLineupSPPreset : ::System::Int32
	{
		Empty = 0,
		Full = 1,
		Half = 2,
		Rand = 3,
		Count = 4,
	};
}
