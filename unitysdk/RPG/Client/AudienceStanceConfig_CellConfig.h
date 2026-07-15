#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_PositionConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceStanceConfig_CellConfig_TypeDefinitionIndex = 66083;

	struct alignas(8) AudienceStanceConfig_CellConfig
	{
		::UnityEngine::Vector2 limitSize; // 0x10
		::Il2CppArray<::RPG::Client::AudienceStanceConfig_PositionConfig>* positionConfigs; // 0x18
	};
}
