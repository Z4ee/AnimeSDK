#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Utf8Parser_ParseNumberOptions_TypeDefinitionIndex = 5001;

	enum class Utf8Parser_ParseNumberOptions : ::System::Int32
	{
		AllowExponent = 1,
	};
}
