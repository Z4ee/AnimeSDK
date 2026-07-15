#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_EPositionPoseType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceStanceConfig_PositionConfig_TypeDefinitionIndex = 66085;

	struct alignas(4) AudienceStanceConfig_PositionConfig
	{
		::UnityEngine::Vector2 position; // 0x10
		::RPG::Client::AudienceStanceConfig_EPositionPoseType supportPoseType; // 0x18
	};
}
