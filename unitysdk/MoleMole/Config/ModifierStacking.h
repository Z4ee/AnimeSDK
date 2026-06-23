#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifierStacking_TypeDefinitionIndex = 73672;

	enum class ModifierStacking : ::System::Int32
	{
		MultipleAllRefreshNotReplace = 10,
		RefreshByLongTime = 7,
		GlobalUnique = 6,
		MultipleRefresh = 4,
		Refresh = 1,
		ReplaceByLongTime = 9,
		Multiple = 3,
		MultipleAllRefresh = 5,
		Replace = 8,
		Unique = 0,
		Prolong = 2,
	};
}
