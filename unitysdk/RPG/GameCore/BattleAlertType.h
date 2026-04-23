#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAlertType_TypeDefinitionIndex = 21844;

	enum class BattleAlertType : ::System::Int32
	{
		DefaultAlert = 0,
		TeamShare = 1,
		AimTarget = 2,
	};
}
