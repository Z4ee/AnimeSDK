#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeammateCountType_TypeDefinitionIndex = 17563;

	enum class TeammateCountType : ::System::Int32
	{
		Empty = 0,
		Count1 = 1,
		Count2 = 2,
		Count3 = 3,
		Count4 = 4,
		Count5 = 5,
		Full = 6,
	};
}
