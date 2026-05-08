#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleRewardType_TypeDefinitionIndex = 16081;

	enum class EBattleRewardType : ::System::Int16
	{
		Ext = 3,
		Challenge = 5,
		BattleEvt = 2,
		Client = 1,
		Fight = 4,
	};
}
