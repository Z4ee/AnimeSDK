#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class MonoEffectPluginSpreadMultiplier; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define STATESPREADCONTROL_METHOD_4_C06AC8811E797798_OFFSET UNITYSDK_OFFSET(0xABE05C0)
#define STATESPREADCONTROL_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xABE03F0)
#define STATESPREADCONTROL_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xABE0510)
#define STATESPREADCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xABE06E0)
#define STATESPREADCONTROL___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xABE06F0)
#define STATESPREADCONTROL___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xABE0700)

inline static constexpr unsigned int StateSpreadControl_TypeDefinitionIndex = 38487;

class StateSpreadControl : public ::UnityEngine::StateMachineBehaviour
{
public:
	::System::Boolean IsStart; // 0x18
	::System::Single NormalizedTime; // 0x1C
	::System::Single TransitionTime; // 0x20
	::System::String* _SpeedControlParam; // 0x28
	::Il2CppArray<::UnityEngine::Transform*>* _ModifyTransforms; // 0x30
	::RPG::Client::MonoEffectPluginSpreadMultiplier* _SpreadMultipler; // 0x38
	::System::Boolean _Triggered; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATESPREADCONTROL__CTOR_OFFSET))(this);
	}

	::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATESPREADCONTROL_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATESPREADCONTROL_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_C06AC8811E797798(::UnityEngine::AnimatorStateInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + STATESPREADCONTROL_METHOD_4_C06AC8811E797798_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATESPREADCONTROL___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATESPREADCONTROL___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
	}
};
