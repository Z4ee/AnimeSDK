#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierHintType_TypeDefinitionIndex = 17511;

	enum class ModifierHintType : ::System::Int32
	{
		Normal = 0,
		Notice = 1,
		Warning = 2,
	};
}
