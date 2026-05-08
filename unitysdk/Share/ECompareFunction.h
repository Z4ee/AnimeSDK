#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECompareFunction_TypeDefinitionIndex = 12451;

	enum class ECompareFunction : ::System::Int16
	{
		Equal = 2,
		Less = 3,
		GreaterEqual = 1,
		LessEqual = 4,
		EnumCount = 7,
		Greater = 0,
		NotEqual = 6,
	};
}
