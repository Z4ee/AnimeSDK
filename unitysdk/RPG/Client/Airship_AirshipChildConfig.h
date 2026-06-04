#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class Airship; }

namespace RPG::Client
{
	inline static constexpr unsigned int Airship_AirshipChildConfig_TypeDefinitionIndex = 55888;

	struct alignas(8) Airship_AirshipChildConfig
	{
		::System::Single distance; // 0x10
		::RPG::Client::Airship* prefab; // 0x18
	};
}
