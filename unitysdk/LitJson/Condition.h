#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 7829;

	enum class Condition : ::System::Int32
	{
		NotAProperty = 2,
		Value = 4,
		InObject = 1,
		Property = 3,
		InArray = 0,
		Comment = 5,
	};
}
