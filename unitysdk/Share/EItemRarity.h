#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EItemRarity_TypeDefinitionIndex = 17769;

	enum class EItemRarity : ::System::Int16
	{
		UR = 5,
		SR = 3,
		EnumCount = 6,
		N = 1,
		SSR = 4,
		R = 2,
	};
}
