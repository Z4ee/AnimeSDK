#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2DialogPerformanceTiming_TypeDefinitionIndex = 15570;

	enum class DiceCombatV2DialogPerformanceTiming : ::System::Int32
	{
		BeforeTurnPrepareToast = 0,
		BeforeBossChangePhase = 1,
	};
}
