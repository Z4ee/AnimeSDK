#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierDeathSource_TypeDefinitionIndex = 17528;

	enum class ModifierDeathSource : ::System::Int32
	{
		Uncertain = 0,
		CasterDead = 1,
		LifeEnd = 2,
		Dispel = 3,
		Exhausted = 4,
		OwnerUnstage = 5,
		CasterUnstage = 6,
		OwnerUnselecable = 7,
		OwnerAbilityRemoved = 8,
		CountZero = 9,
		ByDependency = 10,
		OwnerDead = 11,
	};
}
