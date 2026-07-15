#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleHintToastServiceType_TypeDefinitionIndex = 23874;

	enum class BattleHintToastServiceType : ::System::Int32
	{
		DisplayOnce = 0,
		ShowInWaitAction = 1,
	};
}
