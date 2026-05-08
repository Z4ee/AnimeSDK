#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 7961;

	enum class JsonToken : ::System::Int32
	{
		String = 9,
		Double = 8,
		ObjectEnd = 3,
		ArrayStart = 4,
		ArrayEnd = 5,
		None = 0,
		Long = 7,
		ObjectStart = 1,
		Comment = 11,
		Null = 12,
		Boolean = 10,
		Int = 6,
		PropertyName = 2,
	};
}
