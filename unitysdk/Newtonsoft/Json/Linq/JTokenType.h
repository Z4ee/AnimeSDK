#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenType_TypeDefinitionIndex = 9453;

	enum class JTokenType : ::System::Int32
	{
		None = 0,
		Object = 1,
		Array = 2,
		Constructor = 3,
		Property = 4,
		Comment = 5,
		Integer = 6,
		Float = 7,
		String = 8,
		Boolean = 9,
		Null = 10,
		Undefined = 11,
		Date = 12,
		Raw = 13,
		Bytes = 14,
		Guid = 15,
		Uri = 16,
		TimeSpan = 17,
	};
}
