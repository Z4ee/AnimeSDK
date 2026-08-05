#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EFightRanking_TypeDefinitionIndex = 10290;

	enum class EFightRanking : ::System::Int16
	{
		None = 0,
		S = 5,
		C = 2,
		B = 3,
		D = 1,
		A = 4,
	};
}
