#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierEventFilterMask_TypeDefinitionIndex = 10154;

	enum class ModifierEventFilterMask : ::System::UInt16
	{
		None = 0x0,
		UseSkillOneMore = 0x1,
		InAttackPhase = 0x2,
		SilenceSkill = 0x4,
		BlockPropertyModify = 0x8,
		ElationInsertAbility = 0x10,
	};
}
