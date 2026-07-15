#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProfileQuestGroupData_ElfProfileQuestGroupStatus_TypeDefinitionIndex = 60921;

	enum class ElfProfileQuestGroupData_ElfProfileQuestGroupStatus : ::System::Int32
	{
		Invalid = 0,
		Locked = 1,
		NoReward = 2,
		HasReward = 3,
		Closed = 4,
	};
}
