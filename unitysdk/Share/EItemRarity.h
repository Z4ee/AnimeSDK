#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EItemRarity_TypeDefinitionIndex = 9606;

	enum class EItemRarity : ::System::Int16
	{
		UR = 5,
		SR = 3,
		SSR = 4,
		N = 1,
		R = 2,
		EnumCount = 6,
	};
}
