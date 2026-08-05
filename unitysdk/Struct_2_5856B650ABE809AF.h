#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray5_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5856B650ABE809AF_METHOD_2_30C8640C4A833B5C_OFFSET UNITYSDK_OFFSET(0x8FF180)
#define STRUCT_2_5856B650ABE809AF_METHOD_2_89CAEAD9DF810BDA_OFFSET UNITYSDK_OFFSET(0x8FF210)
#define STRUCT_2_5856B650ABE809AF_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x8FF0D0)
#define STRUCT_2_5856B650ABE809AF_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x8FF010)
#define STRUCT_2_5856B650ABE809AF_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x8FF100)
#define STRUCT_2_5856B650ABE809AF__CTOR_OFFSET UNITYSDK_OFFSET(0x8FF000)

inline static constexpr unsigned int Struct_2_5856B650ABE809AF_TypeDefinitionIndex = 48181;

struct alignas(4) Struct_2_5856B650ABE809AF
{
	::Foundation::FixedArray5_1<::System::Single> Field_2_0; // 0x10

	/*
	::System::Void _ctor(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_5856B650ABE809AF__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5856B650ABE809AF_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5856B650ABE809AF_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5856B650ABE809AF_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	/*
	::System::Void Method_2_30C8640C4A833B5C(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_5856B650ABE809AF_METHOD_2_30C8640C4A833B5C_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Void Method_2_89CAEAD9DF810BDA(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_5856B650ABE809AF_METHOD_2_89CAEAD9DF810BDA_OFFSET))(this, a1, a2);
	}
	*/
};
