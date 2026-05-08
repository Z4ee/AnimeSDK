#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 7800;

	enum class Condition : ::System::Int32
	{
		Value = 4,
		InArray = 0,
		InObject = 1,
		Property = 3,
		NotAProperty = 2,
		Comment = 5,
	};
}
