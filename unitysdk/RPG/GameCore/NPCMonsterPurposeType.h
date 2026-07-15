#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterPurposeType_TypeDefinitionIndex = 16483;

	enum class NPCMonsterPurposeType : ::System::Int32
	{
		Normal = 0,
		FarmElement = 1,
		RogueRelic = 2,
	};
}
