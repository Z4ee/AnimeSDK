#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBF94380)
#define RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBF94410)
#define RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_METHOD_5_5FF72FA3E5F99227_OFFSET UNITYSDK_OFFSET(0xBF941F0)
#define RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBF943C0)
#define RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xBF94170)
#define RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xBF94340)
#define RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBF944D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeSkillTriggerEffect_TypeDefinitionIndex = 61664;

	class MatchThreeSkillTriggerEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_5FF72FA3E5F99227(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLTRIGGEREFFECT_METHOD_5_5FF72FA3E5F99227_OFFSET))(this, a1, a2);
		}
	};
}
