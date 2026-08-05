#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonType_TypeDefinitionIndex = 8140;

	enum class JsonType : ::System::Int32
	{
		Long = 5,
		Int = 4,
		Object = 1,
		Boolean = 7,
		Double = 6,
		String = 3,
		None = 0,
		Array = 2,
	};
}
