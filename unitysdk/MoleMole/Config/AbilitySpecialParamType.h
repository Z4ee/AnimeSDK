#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialParamType_TypeDefinitionIndex = 50140;

	enum class AbilitySpecialParamType : ::System::Int32
	{
		String = 3,
		Float = 0,
		Boolean = 2,
		Int = 1,
	};
}
