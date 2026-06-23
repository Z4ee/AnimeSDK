#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 7811;

	enum class JsonToken : ::System::Int32
	{
		PropertyName = 2,
		Null = 12,
		Boolean = 10,
		ArrayStart = 4,
		String = 9,
		ObjectEnd = 3,
		ArrayEnd = 5,
		Long = 7,
		None = 0,
		Double = 8,
		Int = 6,
		Comment = 11,
		ObjectStart = 1,
	};
}
