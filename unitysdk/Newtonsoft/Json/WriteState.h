#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int WriteState_TypeDefinitionIndex = 9291;

	enum class WriteState : ::System::Int32
	{
		Error = 0,
		Closed = 1,
		Object = 2,
		Array = 3,
		Constructor = 4,
		Property = 5,
		Start = 6,
	};
}
