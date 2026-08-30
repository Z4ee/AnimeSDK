#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinActionIntentType_TypeDefinitionIndex = 10531;

	enum class FateRinActionIntentType : ::System::Int32
	{
		None = 0,
		Attack = 1,
		Defence = 2,
		Buff = 3,
		Debuff = 4,
		PowerAttack = 5,
		Charge = 6,
		Heal = 7,
	};
}
