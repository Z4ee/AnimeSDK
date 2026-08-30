#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeStatusTagData_BattleViewModeExtraEffectStatusTagType_TypeDefinitionIndex = 72021;

	enum class BattleViewModeStatusTagData_BattleViewModeExtraEffectStatusTagType : ::System::Int32
	{
		None = 0,
		TeamLightBack = 1,
		LightTeamSupport = 2,
		TeamDarkBack = 3,
		TeamDarkSupport = 4,
	};
}
