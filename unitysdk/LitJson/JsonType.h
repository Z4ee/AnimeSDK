#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonType_TypeDefinitionIndex = 7851;

	enum class JsonType : ::System::Int32
	{
		Array = 2,
		String = 3,
		Object = 1,
		Int = 4,
		Boolean = 7,
		None = 0,
		Double = 6,
		Long = 5,
	};
}
