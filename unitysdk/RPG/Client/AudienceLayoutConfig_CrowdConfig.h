#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceLayoutConfig_CrowdConfig_TypeDefinitionIndex = 66075;

	struct alignas(4) AudienceLayoutConfig_CrowdConfig
	{
		::RPG::GameCore::NPCBodySize bodySize; // 0x10
		::System::Single weight; // 0x14
	};
}
