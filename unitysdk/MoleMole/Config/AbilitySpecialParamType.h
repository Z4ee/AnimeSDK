#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialParamType_TypeDefinitionIndex = 67207;

	enum class AbilitySpecialParamType : ::System::Int32
	{
		String = 3,
		Float = 0,
		Int = 1,
		Boolean = 2,
	};
}
