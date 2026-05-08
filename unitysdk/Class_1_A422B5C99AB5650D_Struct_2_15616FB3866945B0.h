#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

#define CLASS_1_A422B5C99AB5650D_STRUCT_2_15616FB3866945B0_METHOD_2_BF13C1DCFC6ADCF0_OFFSET UNITYSDK_OFFSET(0x6D57C0)
#define CLASS_1_A422B5C99AB5650D_STRUCT_2_15616FB3866945B0_METHOD_2_E37466A7BFE94EEF_OFFSET UNITYSDK_OFFSET(0x6D5780)

inline static constexpr unsigned int Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0_TypeDefinitionIndex = 43313;

struct alignas(4) Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0
{
	::UnityEngine::Rect Field_2_0; // 0x10
	::UnityEngine::Rect Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C
	::UnityEngine::Rect Field_2_6; // 0x40
	::UnityEngine::Rect Field_2_7; // 0x50

	::UnityEngine::Rect Method_2_E37466A7BFE94EEF(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_STRUCT_2_15616FB3866945B0_METHOD_2_E37466A7BFE94EEF_OFFSET))(this, a1, a2, a3, a4);
	}

	/*
	::System::Void Method_2_BF13C1DCFC6ADCF0(::Cinemachine::LensSettings a1, ::UnityEngine::Rect a2, ::UnityEngine::Rect a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::LensSettings, ::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_STRUCT_2_15616FB3866945B0_METHOD_2_BF13C1DCFC6ADCF0_OFFSET))(this, a1, a2, a3, a4);
	}
	*/
};
