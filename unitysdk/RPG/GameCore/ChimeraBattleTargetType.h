#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleTargetType_TypeDefinitionIndex = 15222;

	enum class ChimeraBattleTargetType : ::System::Int32
	{
		None = 0,
		Self = 1,
		OtherTeammate = 2,
		Work = 3,
		TriggerAbilityTarget = 4,
		CopyAbilityTarget = 5,
	};
}
