#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo.h"
#include "unitysdk/MoleMole/SyncAnimatorStateBehaviour_SyncBlendTreeParams.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedStateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace MoleMole { class SyncAnimatorStateBehaviourTarget; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_GET_SYNCTOANIMATORS_OFFSET UNITYSDK_OFFSET(0x13F25FD0)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_09920515A731BB72_OFFSET UNITYSDK_OFFSET(0x13F269D0)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_2DB8CABC5F9281CC_1_OFFSET UNITYSDK_OFFSET(0x13F26C20)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_2DB8CABC5F9281CC_OFFSET UNITYSDK_OFFSET(0x13F26C10)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_561276174346BF04_OFFSET UNITYSDK_OFFSET(0x13F26930)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_F7B3836BB0EBCB17_OFFSET UNITYSDK_OFFSET(0x13F26350)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x13F26150)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13F265A0)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F26BB0)

namespace MoleMole
{
	inline static constexpr unsigned int SyncAnimatorStateBehaviour_TypeDefinitionIndex = 69164;

	class SyncAnimatorStateBehaviour : public ::Sirenix::OdinInspector::SerializedStateMachineBehaviour
	{
	public:
		::System::Boolean Initialized; // 0x58
		::MoleMole::SyncAnimatorStateBehaviourTarget* SyncAnimatorTarget; // 0x60
		::Il2CppArray<::MoleMole::SyncAnimatorStateBehaviour_SyncBlendTreeParams>* SyncParamStates; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Animator*>* get_SyncToAnimators()
		{
			return ((::Il2CppArray<::UnityEngine::Animator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_GET_SYNCTOANIMATORS_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_F7B3836BB0EBCB17(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_F7B3836BB0EBCB17_OFFSET))(this, a1);
		}

		::System::Void Method_5_2DB8CABC5F9281CC(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_2DB8CABC5F9281CC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_09920515A731BB72(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2, ::Il2CppArray<::MoleMole::SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*, ::Il2CppArray<::MoleMole::SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_09920515A731BB72_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_561276174346BF04(::System::Int32 a1, ::Il2CppArray<::MoleMole::SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MoleMole::SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_561276174346BF04_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2DB8CABC5F9281CC_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_METHOD_5_2DB8CABC5F9281CC_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
