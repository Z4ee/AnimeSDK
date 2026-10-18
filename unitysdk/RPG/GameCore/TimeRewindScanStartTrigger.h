#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class MonoEffectPluginSpreadMultiplier; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE79C630)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_METHOD_4_DF73D58058BE2916_OFFSET UNITYSDK_OFFSET(0xE79C7F0)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE79C6A0)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE79C920)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE79C9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindScanStartTrigger_TypeDefinitionIndex = 57496;

	class TimeRewindScanStartTrigger : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::String* TriggerName; // 0x18
		::System::Single StartNormalizedTime; // 0x20
		::RPG::Client::MonoEffectPluginSpreadMultiplier* _SpreadMultipler; // 0x28
		::System::Boolean _Triggered; // 0x30
		::System::Int32 _TriggerHash; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_DF73D58058BE2916(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_METHOD_4_DF73D58058BE2916_OFFSET))(this, a1, a2);
		}
	};
}
