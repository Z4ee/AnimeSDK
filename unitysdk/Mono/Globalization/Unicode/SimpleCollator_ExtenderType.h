#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SimpleCollator_ExtenderType_TypeDefinitionIndex = 43;

	enum class SimpleCollator_ExtenderType : ::System::Int32
	{
		None = 0,
		Simple = 1,
		Voiced = 2,
		Conditional = 3,
		Buggy = 4,
	};
}
