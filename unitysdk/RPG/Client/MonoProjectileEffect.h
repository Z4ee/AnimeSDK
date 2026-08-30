#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoProjectileEffect_Class_3_9B348C64E713AFA8; }
namespace System { class Action; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOPROJECTILEEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD02B80)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1AD02A30)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1AD02AB0)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD02B20)
#define RPG_CLIENT_MONOPROJECTILEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD02BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoProjectileEffect_TypeDefinitionIndex = 70110;

	class MonoProjectileEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Struct_2_0B84ADD7815498A2 effect; // 0x18
		::RPG::Client::MonoProjectileEffect_Class_3_9B348C64E713AFA8* triggerEnterCallback; // 0x28
		::RPG::Client::MonoProjectileEffect_Class_3_9B348C64E713AFA8* triggerExitCallback; // 0x30
		::System::Action* OnProjectileLateUpdate; // 0x38
		::System::Action* OnProjectileUpdate; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_LATEUPDATE_OFFSET))(this);
		}
	};
}
