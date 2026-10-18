#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xC436220)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_REGISTERONCOLLISIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xC436290)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_UNREGISTERONCOLLISIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xC436300)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL__CTOR_OFFSET UNITYSDK_OFFSET(0xC436370)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoHipplenGameBall_TypeDefinitionIndex = 75598;

	class MonoHipplenGameBall : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Collision*>* CMPKHIJJFOH; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void RegisterOnCollisionCallback(::System::Action_1<::UnityEngine::Collision*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_REGISTERONCOLLISIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterOnCollisionCallback(::System::Action_1<::UnityEngine::Collision*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_UNREGISTERONCOLLISIONCALLBACK_OFFSET))(this, a1);
		}
	};
}
