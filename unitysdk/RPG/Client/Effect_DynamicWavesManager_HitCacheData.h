#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_DynamicWavesManager_HitCacheData_TypeDefinitionIndex = 67292;

	struct alignas(8) Effect_DynamicWavesManager_HitCacheData
	{
		::RPG::Client::Effect_DynamicWavesManager_HitData hitData; // 0x10
		::System::Boolean onCollisionEnter; // 0x38
	};
}
