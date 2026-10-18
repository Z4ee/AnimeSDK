#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitCounterType_TypeDefinitionIndex = 10615;

	enum class RogueMagicUnitCounterType : ::System::Int32
	{
		None = 0,
		KillEliteMonsterNum = 1,
		KillMonsterNum = 2,
	};
}
