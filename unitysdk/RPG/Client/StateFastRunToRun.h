#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEFASTRUNTORUN_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1A4FEFF0)
#define RPG_CLIENT_STATEFASTRUNTORUN_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1A4FF2E0)
#define RPG_CLIENT_STATEFASTRUNTORUN_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4FF120)
#define RPG_CLIENT_STATEFASTRUNTORUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FF5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateFastRunToRun_TypeDefinitionIndex = 68791;

	class StateFastRunToRun : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::String* runStateName; // 0x18
		::System::String* fastRunStateName; // 0x20
		::System::Single transitionOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFASTRUNTORUN__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFASTRUNTORUN_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFASTRUNTORUN_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFASTRUNTORUN_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}
	};
}
