#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonType_TypeDefinitionIndex = 8219;

	enum class JsonType : ::System::Int32
	{
		String = 3,
		Object = 1,
		Double = 6,
		Int = 4,
		Boolean = 7,
		None = 0,
		Array = 2,
		Long = 5,
	};
}
