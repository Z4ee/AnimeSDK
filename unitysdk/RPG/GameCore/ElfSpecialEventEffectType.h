#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventEffectType_TypeDefinitionIndex = 17762;

	enum class ElfSpecialEventEffectType : ::System::Int32
	{
		ElfBuff = 0,
		Reward = 1,
		PhoneMessage = 2,
		SuperEvent = 3,
	};
}
