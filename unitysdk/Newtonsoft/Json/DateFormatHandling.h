#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DateFormatHandling_TypeDefinitionIndex = 8327;

	enum class DateFormatHandling : ::System::Int32
	{
		IsoDateFormat = 0,
		MicrosoftDateFormat = 1,
	};
}
