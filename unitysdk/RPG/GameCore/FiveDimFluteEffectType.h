#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFluteEffectType_TypeDefinitionIndex = 13591;

	enum class FiveDimFluteEffectType : ::System::Int32
	{
		Invalid = 0,
		Teleport = 1,
		GroupProperty = 2,
		DirectTeleport = 3,
	};
}
