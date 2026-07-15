#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGiftEffectType_TypeDefinitionIndex = 11391;

	enum class IdleLiveGiftEffectType : ::System::Int32
	{
		None = 0,
		Box = 1,
		Rocket = 2,
		Money = 3,
	};
}
