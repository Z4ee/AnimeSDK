#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int SearchFilterOptions_TypeDefinitionIndex = 7402;

	enum class SearchFilterOptions : ::System::Int32
	{
		PropertyName = 1,
		PropertyNiceName = 2,
		TypeOfValue = 4,
		ValueToString = 8,
		ISearchFilterableInterface = 16,
		All = -1,
	};
}
