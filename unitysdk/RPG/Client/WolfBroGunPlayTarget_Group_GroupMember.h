#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class WolfBroGunPlayRoadConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget; }

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Group_GroupMember_TypeDefinitionIndex = 65657;

	struct alignas(8) WolfBroGunPlayTarget_Group_GroupMember
	{
		::RPG::Client::WolfBroGunPlayTarget* target; // 0x10
		::UnityEngine::Vector2 offset; // 0x18
		::RPG::Client::WolfBroGunPlayRoadConfig* roadConfig; // 0x20
	};
}
