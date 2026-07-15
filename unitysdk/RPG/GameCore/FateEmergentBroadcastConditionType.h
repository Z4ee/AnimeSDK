#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateEmergentBroadcastConditionType_TypeDefinitionIndex = 11090;

	enum class FateEmergentBroadcastConditionType : ::System::Int32
	{
		None = 0,
		AliveMasterEq = 1,
	};
}
