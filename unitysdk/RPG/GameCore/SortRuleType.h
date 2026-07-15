#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SortRuleType_TypeDefinitionIndex = 17524;

	enum class SortRuleType : ::System::Int32
	{
		MinFirst = 0,
		MaxFirst = 1,
	};
}
