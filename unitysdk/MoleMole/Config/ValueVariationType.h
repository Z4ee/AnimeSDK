#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ValueVariationType_TypeDefinitionIndex = 41372;

	enum class ValueVariationType : ::System::Int32
	{
		Relative = 1,
		Absolute = 0,
	};
}
