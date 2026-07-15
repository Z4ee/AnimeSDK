#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceGlobalPropertyType_TypeDefinitionIndex = 23936;

	enum class RtDefenceGlobalPropertyType : ::System::Int32
	{
		BaseMaxHp = 0,
		BaseHp = 1,
		Coin = 2,
		SummonCount = 3,
		UpgradeCount = 4,
		Count = 5,
	};
}
