#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags_TypeDefinitionIndex = 66894;

	struct alignas(1) BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags
	{
		::System::Boolean MonsterCreatedFlag; // 0x10
		::System::Boolean MonsterAdjustedFlag; // 0x11
	};
}
