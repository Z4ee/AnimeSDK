#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EFightRanking_TypeDefinitionIndex = 12076;

	enum class EFightRanking : ::System::Int16
	{
		D = 1,
		C = 2,
		B = 3,
		None = 0,
		S = 5,
		A = 4,
	};
}
