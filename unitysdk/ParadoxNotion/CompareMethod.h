#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int CompareMethod_TypeDefinitionIndex = 27314;

	enum class CompareMethod : ::System::Int32
	{
		GreaterOrEqualTo = 3,
		LessThan = 2,
		LessOrEqualTo = 4,
		GreaterThan = 1,
		EqualTo = 0,
	};
}
