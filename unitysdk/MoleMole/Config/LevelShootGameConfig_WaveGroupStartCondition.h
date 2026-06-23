#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_WaveGroupStartCondition_TypeDefinitionIndex = 70557;

	enum class LevelShootGameConfig_WaveGroupStartCondition : ::System::Int32
	{
		NoCondition = 0,
		LastGroupDie = 1,
		LastGroupAllRefresh = 2,
		LastGroupFirstRefresh = 3,
	};
}
