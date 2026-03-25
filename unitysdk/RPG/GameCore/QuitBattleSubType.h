#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuitBattleSubType_TypeDefinitionIndex = 47672;

	enum class QuitBattleSubType : ::System::Int32
	{
		Normal = 0,
		EvolveBuildGiveUp = 1,
	};
}
