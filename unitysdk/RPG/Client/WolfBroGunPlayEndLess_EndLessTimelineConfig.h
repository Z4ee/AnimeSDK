#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class WolfBroGunPlayRoadMapConfig; }

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayEndLess_EndLessTimelineConfig_TypeDefinitionIndex = 65667;

	struct alignas(8) WolfBroGunPlayEndLess_EndLessTimelineConfig
	{
		::System::Single weight; // 0x10
		::RPG::Client::WolfBroGunPlayRoadMapConfig* config; // 0x18
	};
}
