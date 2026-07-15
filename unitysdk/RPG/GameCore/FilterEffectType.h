#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FilterEffectType_TypeDefinitionIndex = 23826;

	enum class FilterEffectType : ::System::Int32
	{
		BattleDataViewMode = 0,
		CharacterFrozen = 1,
	};
}
