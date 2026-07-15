#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DateTimeZoneHandling_TypeDefinitionIndex = 9244;

	enum class DateTimeZoneHandling : ::System::Int32
	{
		Local = 0,
		Utc = 1,
		Unspecified = 2,
		RoundtripKind = 3,
	};
}
