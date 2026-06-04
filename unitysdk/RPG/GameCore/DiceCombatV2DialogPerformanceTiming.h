#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2DialogPerformanceTiming_TypeDefinitionIndex = 15406;

	enum class DiceCombatV2DialogPerformanceTiming : ::System::Int32
	{
		BeforeTurnPrepareToast = 0,
		BeforeBossChangePhase = 1,
	};
}
