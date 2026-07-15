#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayRoadMapConfig_PlayTarget.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRoadMapConfig_PlayPoint_TypeDefinitionIndex = 65684;

	struct alignas(8) WolfBroGunPlayRoadMapConfig_PlayPoint
	{
		::System::Single timePoint; // 0x10
		::System::Single loopTime; // 0x14
		::System::Int32 loopCount; // 0x18
		::Il2CppArray<::RPG::Client::WolfBroGunPlayRoadMapConfig_PlayTarget>* targets; // 0x20
	};
}
