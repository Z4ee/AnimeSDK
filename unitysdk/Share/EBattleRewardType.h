#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleRewardType_TypeDefinitionIndex = 11086;

	enum class EBattleRewardType : ::System::Int16
	{
		Challenge = 5,
		Client = 1,
		Ext = 3,
		BattleEvt = 2,
		Fight = 4,
	};
}
