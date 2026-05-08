#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionOperand_TypeDefinitionIndex = 28407;

	enum class StateTreeConditionOperand : ::System::Byte
	{
		Copy = 0x0,
		And = 0x1,
		Or = 0x2,
	};
}
