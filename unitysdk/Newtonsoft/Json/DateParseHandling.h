#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DateParseHandling_TypeDefinitionIndex = 9243;

	enum class DateParseHandling : ::System::Int32
	{
		None = 0,
		DateTime = 1,
		DateTimeOffset = 2,
	};
}
