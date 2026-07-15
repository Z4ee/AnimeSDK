#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBonusType_TypeDefinitionIndex = 10209;

	enum class GridFightTraitBonusType : ::System::Int32
	{
		None = 0,
		Bonus = 1,
		Enhance = 2,
		TraitMemberPropertyRatio = 3,
		AllMemberPropertyRatio = 4,
	};
}
