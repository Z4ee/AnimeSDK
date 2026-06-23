#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAffixLevel_TypeDefinitionIndex = 10624;

	enum class EAffixLevel : ::System::Int16
	{
		R = 1,
		EnumCount = 4,
		SR = 2,
		SSR = 3,
	};
}
