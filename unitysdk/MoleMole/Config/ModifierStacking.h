#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifierStacking_TypeDefinitionIndex = 84161;

	enum class ModifierStacking : ::System::Int32
	{
		Prolong = 2,
		MultipleAllRefresh = 5,
		MultipleAllRefreshNotReplace = 10,
		ReplaceByLongTime = 9,
		Refresh = 1,
		MultipleRefresh = 4,
		GlobalUnique = 6,
		Unique = 0,
		Replace = 8,
		Multiple = 3,
		RefreshByLongTime = 7,
	};
}
