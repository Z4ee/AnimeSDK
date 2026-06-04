#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define LAYERSTATECOUNT_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA657D90)
#define LAYERSTATECOUNT_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA657FD0)
#define LAYERSTATECOUNT_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA657E80)
#define LAYERSTATECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0xA658090)
#define LAYERSTATECOUNT___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA6580A0)
#define LAYERSTATECOUNT___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA6580C0)
#define LAYERSTATECOUNT___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA6580B0)

inline static constexpr unsigned int LayerStateCount_TypeDefinitionIndex = 44611;

class LayerStateCount : public ::UnityEngine::StateMachineBehaviour
{
public:
	::System::String* CountTargetStateName; // 0x18
	::System::String* CountTimeParamName; // 0x20
	::System::Boolean _TestBool; // 0x28
	::System::Single _TimeCount; // 0x2C
	::System::Int32 _LastFrameCount; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERSTATECOUNT__CTOR_OFFSET))(this);
	}

	::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + LAYERSTATECOUNT_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + LAYERSTATECOUNT_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + LAYERSTATECOUNT_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + LAYERSTATECOUNT___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + LAYERSTATECOUNT___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + LAYERSTATECOUNT___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
	}
};
