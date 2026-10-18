#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFluteEffectType_TypeDefinitionIndex = 14115;

	enum class FiveDimFluteEffectType : ::System::Int32
	{
		Invalid = 0,
		Teleport = 1,
		GroupProperty = 2,
		DirectTeleport = 3,
	};
}
