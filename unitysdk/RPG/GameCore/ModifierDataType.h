#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierDataType_TypeDefinitionIndex = 14761;

	enum class ModifierDataType : ::System::Int32
	{
		StackCount = 0,
		LifeTime = 1,
	};
}
