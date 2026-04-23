#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }

#define RPG_CLIENT_WOLFBROGUNPLAYROADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D2800)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRoadConfig_TypeDefinitionIndex = 63390;

	class WolfBroGunPlayRoadConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* inits; // 0x18
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* track1; // 0x20
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* track2; // 0x28
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* track3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROADCONFIG__CTOR_OFFSET))(this);
		}
	};
}
