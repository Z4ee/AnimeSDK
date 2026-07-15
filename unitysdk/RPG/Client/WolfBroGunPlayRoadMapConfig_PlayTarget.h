#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EWolfBroGunPlayTargetActionFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class WolfBroGunPlayRoadConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget; }

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRoadMapConfig_PlayTarget_TypeDefinitionIndex = 65685;

	struct alignas(8) WolfBroGunPlayRoadMapConfig_PlayTarget
	{
		::RPG::Client::WolfBroGunPlayTarget* target; // 0x10
		::RPG::Client::WolfBroGunPlayRoadConfig* overrideConfig; // 0x18
		::RPG::Client::EWolfBroGunPlayTargetActionFlag overrideFlags; // 0x20
		::System::Boolean isOverrideInitPos; // 0x24
		::UnityEngine::Vector2 overrideInitPos; // 0x28
	};
}
