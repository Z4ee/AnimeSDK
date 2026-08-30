#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_D8E60A4D7D755F3F;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCB8E310)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_GET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCB8E300)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCB8E2A0)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_ONHITBYATTACK_OFFSET UNITYSDK_OFFSET(0xCB8E370)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xCB8E430)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingStackDropProxy_TypeDefinitionIndex = 69200;

	class ChenLingStackDropProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_D8E60A4D7D755F3F* MHAEBFAEFCG; // 0x18
		::UnityEngine::Collider* NDGCMCAAKBO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGSTACKDROPPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_2_D8E60A4D7D755F3F* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D8E60A4D7D755F3F*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGSTACKDROPPROXY_INIT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Collider* get_ProxyCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGSTACKDROPPROXY_GET_PROXYCOLLIDER_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGSTACKDROPPROXY_GET_ISVALID_OFFSET))(this);
		}

		::System::Void OnHitByAttack(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGSTACKDROPPROXY_ONHITBYATTACK_OFFSET))(this, a1);
		}
	};
}
