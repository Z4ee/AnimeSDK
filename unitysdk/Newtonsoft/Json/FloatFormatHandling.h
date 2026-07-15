#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int FloatFormatHandling_TypeDefinitionIndex = 9245;

	enum class FloatFormatHandling : ::System::Int32
	{
		String = 0,
		Symbol = 1,
		DefaultValue = 2,
	};
}
