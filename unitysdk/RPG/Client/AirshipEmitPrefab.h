#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class Airship; }

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipEmitPrefab_TypeDefinitionIndex = 57130;

	struct alignas(8) AirshipEmitPrefab
	{
		::RPG::Client::Airship* airship; // 0x10
		::System::Single weight; // 0x18
	};
}
