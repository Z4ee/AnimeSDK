#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class AirshipCar; }

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarEmitPrefab_TypeDefinitionIndex = 57154;

	struct alignas(8) AirshipCarEmitPrefab
	{
		::RPG::Client::AirshipCar* airship; // 0x10
		::System::Single weight; // 0x18
	};
}
