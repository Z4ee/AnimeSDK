#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 7949;

	enum class JsonToken : ::System::Int32
	{
		String = 9,
		Null = 12,
		ArrayEnd = 5,
		Double = 8,
		ArrayStart = 4,
		ObjectStart = 1,
		ObjectEnd = 3,
		Comment = 11,
		Int = 6,
		None = 0,
		PropertyName = 2,
		Boolean = 10,
		Long = 7,
	};
}
