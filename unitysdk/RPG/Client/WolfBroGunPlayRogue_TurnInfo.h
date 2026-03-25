#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRogue_TurnInfo_TypeDefinitionIndex = 56156;

	struct alignas(4) WolfBroGunPlayRogue_TurnInfo
	{
		::System::Single Length; // 0x10
		::System::Single TargetScore; // 0x14
	};
}
