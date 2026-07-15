#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTypeMask_TypeDefinitionIndex = 10152;

	enum class TeamTypeMask : ::System::UInt16
	{
		None = 0x0,
		All = 0xFFFF,
		TeamUnknow = 0x1,
		TeamLight = 0x2,
		TeamDark = 0x4,
		TeamNeutral = 0x8,
		TeamNPC = 0x10,
		SelfTeam = 0x20,
		EnemyTeam = 0x40,
		Mask_LightDark = 0x6,
	};
}
