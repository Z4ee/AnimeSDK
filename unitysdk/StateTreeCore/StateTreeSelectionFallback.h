#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeSelectionFallback_TypeDefinitionIndex = 28419;

	enum class StateTreeSelectionFallback : ::System::Byte
	{
		None = 0x0,
		NextSelectableSibling = 0x1,
	};
}
