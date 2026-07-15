#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumberSetMode_TypeDefinitionIndex = 23779;

	enum class NumberSetMode : ::System::Int32
	{
		Set = 0,
		Inc = 1,
	};
}
