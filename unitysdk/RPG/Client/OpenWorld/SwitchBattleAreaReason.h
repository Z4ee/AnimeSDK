#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SwitchBattleAreaReason_TypeDefinitionIndex = 73760;

	enum class SwitchBattleAreaReason : ::System::Int32
	{
		Default = 0,
		Task = 1,
	};
}
