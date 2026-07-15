#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStacking_TypeDefinitionIndex = 15039;

	enum class ModifierStacking : ::System::Int32
	{
		Unknow = 0,
		Unique = 1,
		Refresh = 2,
		Prolong = 3,
		Multiple = 4,
		Replace = 5,
		Merge = 6,
		ReplaceByCaster = 7,
		ReplaceByCasterOrUnStack = 8,
		EntityUnique = 9,
		ReplaceButKeepLifeTime = 10,
		RetainGlobalLatest = 11,
		ReplaceByCasterAbility = 12,
		RetainGlobalLatestUnique = 13,
	};
}
