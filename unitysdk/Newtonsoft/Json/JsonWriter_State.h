#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonWriter_State_TypeDefinitionIndex = 9290;

	enum class JsonWriter_State : ::System::Int32
	{
		Start = 0,
		Property = 1,
		ObjectStart = 2,
		Object = 3,
		ArrayStart = 4,
		Array = 5,
		ConstructorStart = 6,
		Constructor = 7,
		Closed = 8,
		Error = 9,
	};
}
