#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateEmergentBroadcastOverrideState_TypeDefinitionIndex = 11089;

	enum class FateEmergentBroadcastOverrideState : ::System::Int32
	{
		None = 0,
		PreBattle = 1,
		PostBattle = 2,
	};
}
