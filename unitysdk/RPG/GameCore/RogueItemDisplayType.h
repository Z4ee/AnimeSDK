#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueItemDisplayType_TypeDefinitionIndex = 10238;

	enum class RogueItemDisplayType : ::System::Int32
	{
		None = 0,
		Toast = 1,
		Dialog = 2,
	};
}
