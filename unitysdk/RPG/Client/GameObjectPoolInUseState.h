#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectPoolInUseState_TypeDefinitionIndex = 56736;

	enum class GameObjectPoolInUseState : ::System::Byte
	{
		Unused = 0x0,
		UnusedInCache = 0x1,
		InUse = 0x2,
	};
}
