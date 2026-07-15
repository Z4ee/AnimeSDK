#pragma once
#include "unitysdk/unitysdk.h"

namespace Codable
{
	inline static constexpr unsigned int JSONNodeType_TypeDefinitionIndex = 44332;

	enum class JSONNodeType : ::System::Int32
	{
		Array = 1,
		Object = 2,
		String = 3,
		Number = 4,
		NullValue = 5,
		Boolean = 6,
		None = 7,
		Custom = 255,
	};
}
