#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ActionRole_TypeDefinitionIndex = 24010;

	enum class ActionRole : ::System::Int32
	{
		Self = 0,
		Enemy = 1,
	};
}
