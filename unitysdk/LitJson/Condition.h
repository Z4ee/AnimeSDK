#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 8368;

	enum class Condition : ::System::Int32
	{
		InArray = 0,
		Property = 3,
		InObject = 1,
		Value = 4,
		Comment = 5,
		NotAProperty = 2,
	};
}
