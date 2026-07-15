#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int FloatParseHandling_TypeDefinitionIndex = 9246;

	enum class FloatParseHandling : ::System::Int32
	{
		Double = 0,
		Decimal = 1,
	};
}
