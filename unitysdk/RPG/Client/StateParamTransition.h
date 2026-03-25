#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class StateParamTransition_Duration; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA4DBB90)
#define RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4DBF60)
#define RPG_CLIENT_STATEPARAMTRANSITION_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4DBD90)
#define RPG_CLIENT_STATEPARAMTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xA4DC1C0)
#define RPG_CLIENT_STATEPARAMTRANSITION___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA4DC1E0)
#define RPG_CLIENT_STATEPARAMTRANSITION___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4DC200)
#define RPG_CLIENT_STATEPARAMTRANSITION___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4DC1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParamTransition_TypeDefinitionIndex = 56235;

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

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}
	};
}
