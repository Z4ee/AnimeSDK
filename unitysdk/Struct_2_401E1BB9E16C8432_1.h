#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray4_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_401E1BB9E16C8432_1_METHOD_2_30C8640C4A833B5C_OFFSET UNITYSDK_OFFSET(0x8B8F70)
#define STRUCT_2_401E1BB9E16C8432_1_METHOD_2_89CAEAD9DF810BDA_OFFSET UNITYSDK_OFFSET(0x8B9000)
#define STRUCT_2_401E1BB9E16C8432_1_METHOD_2_E26DC44DCE94AB5A_OFFSET UNITYSDK_OFFSET(0x8B8F60)
#define STRUCT_2_401E1BB9E16C8432_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8F50)

inline static constexpr unsigned int Struct_2_401E1BB9E16C8432_1_TypeDefinitionIndex = 69571;

struct alignas(4) Struct_2_401E1BB9E16C8432_1
{
	::System::Single Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x14
	::Foundation::FixedArray4_1<::System::Single> Field_2_0; // 0x18

	/*
	::System::Void _ctor(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_401E1BB9E16C8432_1__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Single Method_2_E26DC44DCE94AB5A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_401E1BB9E16C8432_1_METHOD_2_E26DC44DCE94AB5A_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_30C8640C4A833B5C(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_401E1BB9E16C8432_1_METHOD_2_30C8640C4A833B5C_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Void Method_2_89CAEAD9DF810BDA(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_401E1BB9E16C8432_1_METHOD_2_89CAEAD9DF810BDA_OFFSET))(this, a1, a2);
	}
	*/
};
