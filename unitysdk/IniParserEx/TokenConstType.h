#pragma once
#include "unitysdk/unitysdk.h"

namespace IniParserEx
{
	inline static constexpr unsigned int TokenConstType_TypeDefinitionIndex = 3914;

	enum class TokenConstType : ::System::Int32
	{
		None = 0,
		Byte = 1,
		Int = 2,
		Int64 = 3,
		Bool = 4,
		Float = 5,
		Double = 6,
		String = 7,
		Char = 8,
		Max = 8,
	};
}
