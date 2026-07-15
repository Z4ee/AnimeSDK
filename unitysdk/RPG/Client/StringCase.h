#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StringCase_TypeDefinitionIndex = 33787;

	enum class StringCase : ::System::Int32
	{
		Original = 0,
		LowerCase = 1,
		UpperCase = 2,
	};
}
