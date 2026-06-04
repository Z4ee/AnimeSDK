#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicStageBattleEventMode_TypeDefinitionIndex = 23299;

	enum class DynamicStageBattleEventMode : ::System::Int32
	{
		Normal = 0,
		ReplaceNext = 1,
		ReplaceAllVisible = 2,
	};
}
