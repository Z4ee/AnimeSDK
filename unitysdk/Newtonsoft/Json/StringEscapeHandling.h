#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int StringEscapeHandling_TypeDefinitionIndex = 8196;

	enum class StringEscapeHandling : ::System::Int32
	{
		Default = 0,
		EscapeNonAscii = 1,
		EscapeHtml = 2,
	};
}
