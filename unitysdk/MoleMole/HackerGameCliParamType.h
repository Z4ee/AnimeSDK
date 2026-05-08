#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameCliParamType_TypeDefinitionIndex = 50777;

	enum class HackerGameCliParamType : ::System::Int32
	{
		TYPE_CURRENCY = 2,
		TYPE_FEVER_LIMIT = 8,
		TYPE_DURABILITY_LIMIT = 6,
		TYPE_LEVEL = 1,
		TYPE_PERCENT_LIMIT = 9,
		TYPE_ENERGY = 4,
		TYPE_NONE = 0,
		TYPE_FEVER = 5,
		TYPE_ENERGY_LIMIT = 7,
		TYPE_DURABILITY = 3,
	};
}
