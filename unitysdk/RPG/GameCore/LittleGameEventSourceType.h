#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEventSourceType_TypeDefinitionIndex = 17955;

	enum class LittleGameEventSourceType : ::System::Int32
	{
		ContextSelf = 0,
		LevelGraph = 1,
		SpecificEntity = 2,
	};
}
