#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierDataType_TypeDefinitionIndex = 15897;

	enum class ModifierDataType : ::System::Int32
	{
		StackCount = 0,
		LifeTime = 1,
	};
}
