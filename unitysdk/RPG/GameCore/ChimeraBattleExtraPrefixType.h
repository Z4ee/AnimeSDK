#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleExtraPrefixType_TypeDefinitionIndex = 14993;

	enum class ChimeraBattleExtraPrefixType : ::System::Int32
	{
		None = 0,
		Has = 1,
		SelfAtkGreaterThenWorkHP = 2,
		HasNoneAbilityMember = 3,
		NotFirstTurn = 4,
	};
}
