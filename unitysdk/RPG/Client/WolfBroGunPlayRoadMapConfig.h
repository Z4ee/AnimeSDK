#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayRoadMapConfig_PlayPoint.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_WOLFBROGUNPLAYROADMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17422250)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRoadMapConfig_TypeDefinitionIndex = 65683;

	class WolfBroGunPlayRoadMapConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean isBossMode; // 0x18
		::System::Int32 bossHPBarCount; // 0x1C
		::System::Int32 bossHP; // 0x20
		::System::Int32 bossHP_Endless; // 0x24
		::System::Single bossKilledScore; // 0x28
		::System::Single timelineLength; // 0x2C
		::Il2CppArray<::RPG::Client::WolfBroGunPlayRoadMapConfig_PlayPoint>* timelinePoints; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROADMAPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
