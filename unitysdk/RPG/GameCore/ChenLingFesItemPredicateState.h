#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemPredicateState_TypeDefinitionIndex = 23702;

	enum class ChenLingFesItemPredicateState : ::System::Int32
	{
		None = 0,
		IsFirst = 1,
		IsLast = 2,
		ContainsStartCell = 3,
		ContainsEndCell = 4,
		ContainsOtherItem = 5,
		ContainsOtherItemThroughout = 6,
	};
}
