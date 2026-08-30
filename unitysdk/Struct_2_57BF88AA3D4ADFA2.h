#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }

#define STRUCT_2_57BF88AA3D4ADFA2_METHOD_2_7607A92111E01143_OFFSET UNITYSDK_OFFSET(0x3AEF2D0)
#define STRUCT_2_57BF88AA3D4ADFA2_METHOD_2_B07E24B53AB9ABB2_OFFSET UNITYSDK_OFFSET(0x3AEF2E0)

inline static constexpr unsigned int Struct_2_57BF88AA3D4ADFA2_TypeDefinitionIndex = 73230;

struct alignas(4) Struct_2_57BF88AA3D4ADFA2
{
	::System::Int32 HEFPHPPEPJM; // 0x10
	::UnityEngine::AnimatorControllerParameterType MPDOMNOHGJK; // 0x14
	::System::Single OLJIPFOPPKP; // 0x18
	::System::Int32 BOMGKHMFMGC; // 0x18
	::System::Boolean OAOEIEDKCGL; // 0x18

	::System::Void Method_2_7607A92111E01143(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorControllerParameter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + STRUCT_2_57BF88AA3D4ADFA2_METHOD_2_7607A92111E01143_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B07E24B53AB9ABB2(::UnityEngine::Animator* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + STRUCT_2_57BF88AA3D4ADFA2_METHOD_2_B07E24B53AB9ABB2_OFFSET))(this, a1);
	}
};
