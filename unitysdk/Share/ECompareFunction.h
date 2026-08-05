#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECompareFunction_TypeDefinitionIndex = 14543;

	enum class ECompareFunction : ::System::Int16
	{
		GreaterEqual = 1,
		NotEqual = 6,
		Greater = 0,
		Less = 3,
		LessEqual = 4,
		EnumCount = 7,
		Equal = 2,
	};
}
