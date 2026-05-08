#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_49C1630534D9538D__CTOR_OFFSET UNITYSDK_OFFSET(0x7171F0)

inline static constexpr unsigned int Struct_2_49C1630534D9538D_TypeDefinitionIndex = 69792;

struct alignas(8) Struct_2_49C1630534D9538D
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::AnimationCurve* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::System::Single Field_2_4; // 0x28
	::System::Single Field_2_5; // 0x2C
	::System::Boolean Field_2_6; // 0x30
	::UnityEngine::Vector3 Field_2_7; // 0x34

	::System::Void _ctor(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_49C1630534D9538D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
