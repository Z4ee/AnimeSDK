#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_2A98030F4AD4BAA1;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCAD5740)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_GET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCAD5730)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCAD56D0)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY_ONHITBYATTACK_OFFSET UNITYSDK_OFFSET(0xCAD57A0)
#define RPG_CLIENT_CHENLINGSTACKDROPPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xCAD5860)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingStackDropProxy_TypeDefinitionIndex = 69236;

	class ChenLingStackDropProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_2A98030F4AD4BAA1* MHAEBFAEFCG; // 0x18
		::UnityEngine::Collider* NDGCMCAAKBO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGSTACKDROPPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_2_2A98030F4AD4BAA1* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2A98030F4AD4BAA1*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGSTACKDROPPROXY_INIT_OFFSET))(this, a1, a2);
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
