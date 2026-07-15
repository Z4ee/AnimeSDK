#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BakeLayoutTypeId_TypeDefinitionIndex = 15797;

	enum class BakeLayoutTypeId : ::System::UInt16
	{
		TypeId_TurnBasedModifierConfig = 0x0,
		TypeId_TurnBasedAbilityConfig = 0x1,
		TypeId_TaskListTemplateConfig = 0x2,
		TypeId_TargetAliasConfig = 0x3,
		TypeId_FormationData = 0x4,
		TypeId_AIFactorGroupConfig = 0x5,
		TypeId_VCameraConfig = 0x6,
		TypeId_SubMissionInfoConfig = 0x7,
	};
}
