#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATENORMALIZEDTIMETRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A500D80)
#define RPG_CLIENT_STATENORMALIZEDTIMETRIGGER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1A500DF0)
#define RPG_CLIENT_STATENORMALIZEDTIMETRIGGER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A500E70)
#define RPG_CLIENT_STATENORMALIZEDTIMETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A500F50)

namespace RPG::Client
{
	inline static constexpr unsigned int StateNormalizedTimeTrigger_TypeDefinitionIndex = 68798;

	class StateNormalizedTimeTrigger : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::String* TriggerName; // 0x18
		::System::Single NormalizedTime; // 0x20
		::System::Boolean EnableInverseNormalizedTime; // 0x24
		::System::Single InverseNormalizedTime; // 0x28
		::System::Single _LastNormalizedTime; // 0x2C
		::System::Int32 _TriggerHash; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIMETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIMETRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIMETRIGGER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATENORMALIZEDTIMETRIGGER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
