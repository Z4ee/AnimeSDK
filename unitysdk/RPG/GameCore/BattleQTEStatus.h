#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleQTEStatus_TypeDefinitionIndex = 53656;

	enum class BattleQTEStatus : ::System::Int32
	{
		Invalid = 0,
		Ready = 1,
		StartDelay = 2,
		Executing = 3,
		Finished = 4,
		Destroyed = 5,
	};
}
