#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EItemRarity_TypeDefinitionIndex = 9661;

	enum class EItemRarity : ::System::Int16
	{
		N = 1,
		R = 2,
		SR = 3,
		SSR = 4,
		EnumCount = 6,
		UR = 5,
	};
}
