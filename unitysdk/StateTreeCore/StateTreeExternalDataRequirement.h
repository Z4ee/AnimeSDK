#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExternalDataRequirement_TypeDefinitionIndex = 31081;

	enum class StateTreeExternalDataRequirement : ::System::Byte
	{
		Required = 0x0,
		Optional = 0x1,
	};
}
