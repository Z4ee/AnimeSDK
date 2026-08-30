#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define STATEWHEELMOVE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x197F3440)
#define STATEWHEELMOVE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x197F34B0)
#define STATEWHEELMOVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F3680)
#define STATEWHEELMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x197F3670)

inline static constexpr unsigned int StateWheelMove_TypeDefinitionIndex = 47735;

class StateWheelMove : public ::UnityEngine::StateMachineBehaviour
{
public:
	static ::System::Int32* StaticGet__WheelSpeedScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StateWheelMove_TypeDefinitionIndex)->GetStaticField(0x11B20);
	}
	static ::System::Int32* StaticGet__IsMove()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StateWheelMove_TypeDefinitionIndex)->GetStaticField(0x11B24);
	}
	::System::Single fadeTime; // 0x18
	::System::Single MoveAnimSpeed; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEWHEELMOVE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATEWHEELMOVE__CCTOR_OFFSET))();
	}

	::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
	}
};
