#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

class Class_3_18D48E37FF85E25B;
namespace UnityEngine { class Animator; }

#define BONEADJUSTSTATEBEHAVIOUR_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1512CEB0)
#define BONEADJUSTSTATEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1512D110)
#define BONEADJUSTSTATEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1512D4D0)
#define BONEADJUSTSTATEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1512D2F0)
#define BONEADJUSTSTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1512D6B0)
#define BONEADJUSTSTATEBEHAVIOUR___BASE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1512D710)
#define BONEADJUSTSTATEBEHAVIOUR___BASE_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1512D720)
#define BONEADJUSTSTATEBEHAVIOUR___BASE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1512D730)

inline static constexpr unsigned int BoneAdjustStateBehaviour_TypeDefinitionIndex = 42911;

class BoneAdjustStateBehaviour : public ::UnityEngine::StateMachineBehaviour
{
public:
	::System::Boolean initialized; // 0x18
	::Class_3_18D48E37FF85E25B* boneAdjustComponent; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR__CTOR_OFFSET))(this);
	}

	::System::Void InitComponent(::UnityEngine::Animator* animator)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR_INITCOMPONENT_OFFSET))(this, animator);
	}

	::System::Void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR_ONSTATEENTER_OFFSET))(this, animator, stateInfo, layerIndex);
	}

	::System::Void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(this, animator, stateInfo, layerIndex);
	}

	::System::Void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR_ONSTATEEXIT_OFFSET))(this, animator, stateInfo, layerIndex);
	}

	::System::Void __base_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR___BASE_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __base_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR___BASE_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __base_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + BONEADJUSTSTATEBEHAVIOUR___BASE_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
	}
};
