#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class AirshipBird; }

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipBirdEmitPrefab_TypeDefinitionIndex = 57142;

	struct alignas(8) AirshipBirdEmitPrefab
	{
		::RPG::Client::AirshipBird* airship; // 0x10
		::System::Single weight; // 0x18
	};
}
