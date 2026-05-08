#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifierStacking_TypeDefinitionIndex = 74060;

	enum class ModifierStacking : ::System::Int32
	{
		MultipleRefresh = 4,
		Refresh = 1,
		Replace = 8,
		Multiple = 3,
		Prolong = 2,
		Unique = 0,
		MultipleAllRefresh = 5,
		MultipleAllRefreshNotReplace = 10,
		RefreshByLongTime = 7,
		GlobalUnique = 6,
		ReplaceByLongTime = 9,
	};
}
