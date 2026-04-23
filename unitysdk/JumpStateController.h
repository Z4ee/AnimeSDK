#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define JUMPSTATECONTROLLER_METHOD_4_097455A9BF07EB21_OFFSET UNITYSDK_OFFSET(0x12859AD0)
#define JUMPSTATECONTROLLER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x128599E0)
#define JUMPSTATECONTROLLER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12859D20)
#define JUMPSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12859DB0)
#define JUMPSTATECONTROLLER___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x12859DE0)
#define JUMPSTATECONTROLLER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12859DF0)

inline static constexpr unsigned int JumpStateController_TypeDefinitionIndex = 44064;

class JumpStateController : public ::UnityEngine::StateMachineBehaviour
{
public:
	::System::String* verticalVelocityParameter; // 0x18
	::UnityEngine::AnimationCurve* risingCurve; // 0x20
	::UnityEngine::AnimationCurve* fallingCurve; // 0x28
	::System::Single smoothTime; // 0x30
	::System::String* motionTimeParameter; // 0x38
	::System::Int32 _verticalVelocityHash; // 0x40
	::System::Int32 _motionTimeHash; // 0x44
	::System::Single _currentSmoothedTime; // 0x48
	::System::Single _smoothingVelocity; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JUMPSTATECONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + JUMPSTATECONTROLLER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + JUMPSTATECONTROLLER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_097455A9BF07EB21(::UnityEngine::Animator* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + JUMPSTATECONTROLLER_METHOD_4_097455A9BF07EB21_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + JUMPSTATECONTROLLER___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + JUMPSTATECONTROLLER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
	}
};
