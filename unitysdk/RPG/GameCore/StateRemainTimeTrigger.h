#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_STATEREMAINTIMETRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAA3F640)
#define RPG_GAMECORE_STATEREMAINTIMETRIGGER_METHOD_4_063FB1EC4B878066_OFFSET UNITYSDK_OFFSET(0xAA3F760)
#define RPG_GAMECORE_STATEREMAINTIMETRIGGER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xAA3F6B0)
#define RPG_GAMECORE_STATEREMAINTIMETRIGGER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAA3F840)
#define RPG_GAMECORE_STATEREMAINTIMETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3F8E0)
#define RPG_GAMECORE_STATEREMAINTIMETRIGGER___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xAA3F8F0)
#define RPG_GAMECORE_STATEREMAINTIMETRIGGER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAA3F900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateRemainTimeTrigger_TypeDefinitionIndex = 46313;

	class StateRemainTimeTrigger : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::String* TriggerName; // 0x18
		::System::Single RemainTime; // 0x20
		::System::Boolean CalcSpeedScale; // 0x24
		::System::Boolean SetTrigger; // 0x25
		::System::Boolean _Triggered; // 0x26
		::System::Int32 _TriggerHash; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEREMAINTIMETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEREMAINTIMETRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEREMAINTIMETRIGGER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEREMAINTIMETRIGGER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_063FB1EC4B878066(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEREMAINTIMETRIGGER_METHOD_4_063FB1EC4B878066_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEREMAINTIMETRIGGER___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEREMAINTIMETRIGGER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
