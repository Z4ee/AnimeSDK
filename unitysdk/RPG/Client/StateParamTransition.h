#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class StateParamTransition_Duration; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE0EE3D0)
#define RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE0EE790)
#define RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE0EE5D0)
#define RPG_CLIENT_STATEPARAMTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EE9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParamTransition_TypeDefinitionIndex = 68804;

	class StateParamTransition : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::StateParamTransition_Duration*>* DurationParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}
	};
}
