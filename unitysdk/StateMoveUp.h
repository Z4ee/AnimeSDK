#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define STATEMOVEUP_METHOD_4_D00EFFFA316CD3C0_OFFSET UNITYSDK_OFFSET(0xABE02F0)
#define STATEMOVEUP_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xABDFEB0)
#define STATEMOVEUP_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xABDFF60)
#define STATEMOVEUP__CTOR_OFFSET UNITYSDK_OFFSET(0xABE03C0)
#define STATEMOVEUP___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xABE03D0)
#define STATEMOVEUP___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xABE03E0)

inline static constexpr unsigned int StateMoveUp_TypeDefinitionIndex = 38182;

class StateMoveUp : public ::UnityEngine::StateMachineBehaviour
{
public:
	::System::Boolean isMoveUp; // 0x18
	::System::Single WingsBlend; // 0x1C
	::System::Single WingsBlendSpeed; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEMOVEUP__CTOR_OFFSET))(this);
	}

	::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEMOVEUP_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEMOVEUP_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_4_D00EFFFA316CD3C0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STATEMOVEUP_METHOD_4_D00EFFFA316CD3C0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEMOVEUP___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEMOVEUP___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
	}
};
