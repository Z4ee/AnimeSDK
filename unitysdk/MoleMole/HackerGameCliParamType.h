#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameCliParamType_TypeDefinitionIndex = 57562;

	enum class HackerGameCliParamType : ::System::Int32
	{
		TYPE_DURABILITY_LIMIT = 6,
		TYPE_ENERGY_LIMIT = 7,
		TYPE_FEVER_LIMIT = 8,
		TYPE_NONE = 0,
		TYPE_LEVEL = 1,
		TYPE_DURABILITY = 3,
		TYPE_FEVER = 5,
		TYPE_CURRENCY = 2,
		TYPE_PERCENT_LIMIT = 9,
		TYPE_ENERGY = 4,
	};
}
