#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavConnectType_TypeDefinitionIndex = 16639;

	enum class LittleGameNavConnectType : ::System::Int32
	{
		Entrance = 0,
		Exit = 1,
	};
}
