#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBattleEventType_TypeDefinitionIndex = 14826;

	enum class StageBattleEventType : ::System::Int32
	{
		None = 0,
		Buff = 1,
		Debuff = 2,
	};
}
