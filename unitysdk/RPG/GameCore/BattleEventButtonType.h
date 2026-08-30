#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventButtonType_TypeDefinitionIndex = 10390;

	enum class BattleEventButtonType : ::System::Int32
	{
		None = 0,
		Attack = 1,
		Buff = 2,
		Debuff = 3,
		Heliobus = 4,
	};
}
