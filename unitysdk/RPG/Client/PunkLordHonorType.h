#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordHonorType_TypeDefinitionIndex = 63766;

	enum class PunkLordHonorType : ::System::Int32
	{
		None = 0,
		HighestTotalDamage = 1,
		HighestSingleAttackDamage = 2,
		FinalKill = 3,
		TotalDamagePercent20 = 4,
		TotalDamagePercent30 = 4,
		HighestAssistTotalDamage = 6,
	};
}
