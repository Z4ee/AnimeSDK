#pragma once
#include "unitysdk/unitysdk.h"

namespace Dest::Math
{
	inline static constexpr unsigned int QueryTypes_TypeDefinitionIndex = 6684;

	enum class QueryTypes : ::System::Int32
	{
		Int64 = 0,
		Integer = 1,
		Rational = 2,
		Real = 3,
		Filtered = 4,
	};
}
