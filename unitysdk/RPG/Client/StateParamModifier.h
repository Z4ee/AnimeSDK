#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class StateParam; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xC9254F0)
#define RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xC925710)
#define RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC9255D0)
#define RPG_CLIENT_STATEPARAMMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9257F0)
#define RPG_CLIENT_STATEPARAMMODIFIER___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xC925810)
#define RPG_CLIENT_STATEPARAMMODIFIER___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xC925830)
#define RPG_CLIENT_STATEPARAMMODIFIER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC925820)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParamModifier_TypeDefinitionIndex = 64392;

	class StateParamModifier : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::StateParam*>* stateParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}
	};
}
