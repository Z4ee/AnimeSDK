#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierCallbackType_TypeDefinitionIndex = 52195;

	enum class TurnBasedModifierCallbackType : ::System::Byte
	{
		None = 0x0,
		Event = 0x1,
		Property = 0x2,
		DynamicValue = 0x3,
	};
}
