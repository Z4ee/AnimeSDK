#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffAeonType_TypeDefinitionIndex = 14139;

	enum class RogueBuffAeonType : ::System::Int32
	{
		Normal = 0,
		BattleEventBuff = 1,
		BattleEventBuffEnhance = 2,
		BattleEventBuffCross = 3,
	};
}
