#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPLAYTIMER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE12F6A0)
#define RPG_CLIENT_STATEPLAYTIMER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE12F750)
#define RPG_CLIENT_STATEPLAYTIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE12F800)
#define RPG_CLIENT_STATEPLAYTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xE12F930)

namespace RPG::Client
{
	inline static constexpr unsigned int StatePlayTimer_TypeDefinitionIndex = 68839;

	class StatePlayTimer : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single playTime; // 0x18
		::System::String* playTimeParameter; // 0x20
		::System::Boolean UseDeltaTime; // 0x28
		::System::Single _lastNormalizedTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPLAYTIMER__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPLAYTIMER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPLAYTIMER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPLAYTIMER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
