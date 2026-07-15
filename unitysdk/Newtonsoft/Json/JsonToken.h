#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 9288;

	enum class JsonToken : ::System::Int32
	{
		None = 0,
		StartObject = 1,
		StartArray = 2,
		StartConstructor = 3,
		PropertyName = 4,
		Comment = 5,
		Raw = 6,
		Integer = 7,
		Float = 8,
		String = 9,
		Boolean = 10,
		Null = 11,
		Undefined = 12,
		EndObject = 13,
		EndArray = 14,
		EndConstructor = 15,
		Date = 16,
		Bytes = 17,
	};
}
