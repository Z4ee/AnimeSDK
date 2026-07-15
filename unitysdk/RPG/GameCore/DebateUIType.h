#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateUIType_TypeDefinitionIndex = 23724;

	enum class DebateUIType : ::System::Int32
	{
		Normal = 0,
		Question = 1,
		Explain = 2,
	};
}
