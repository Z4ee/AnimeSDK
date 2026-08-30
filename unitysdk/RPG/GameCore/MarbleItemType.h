#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleItemType_TypeDefinitionIndex = 16642;

	enum class MarbleItemType : ::System::Int32
	{
		Static = 0,
		Trigger = 1,
		Dynamic = 2,
	};
}
