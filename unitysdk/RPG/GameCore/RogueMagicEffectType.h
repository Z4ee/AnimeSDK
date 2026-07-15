#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicEffectType_TypeDefinitionIndex = 10265;

	enum class RogueMagicEffectType : ::System::Int32
	{
		None = 0,
		Stack = 1,
		Turn = 2,
		Field = 4,
	};
}
