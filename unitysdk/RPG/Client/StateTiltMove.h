#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATETILTMOVE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE0F2780)
#define RPG_CLIENT_STATETILTMOVE_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE0F2890)
#define RPG_CLIENT_STATETILTMOVE_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xE0F2A80)
#define RPG_CLIENT_STATETILTMOVE_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xE0F2A10)
#define RPG_CLIENT_STATETILTMOVE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE0F29A0)
#define RPG_CLIENT_STATETILTMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F2AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateTiltMove_TypeDefinitionIndex = 68812;

	class StateTiltMove : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Boolean forceTilt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETILTMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETILTMOVE_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETILTMOVE_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETILTMOVE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETILTMOVE_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETILTMOVE_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}
	};
}
