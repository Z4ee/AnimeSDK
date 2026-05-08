#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_522A6EE7BADD85E9_METHOD_2_30C8640C4A833B5C_OFFSET UNITYSDK_OFFSET(0x730210)
#define STRUCT_2_522A6EE7BADD85E9_METHOD_2_89CAEAD9DF810BDA_OFFSET UNITYSDK_OFFSET(0x7302A0)
#define STRUCT_2_522A6EE7BADD85E9_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x730160)
#define STRUCT_2_522A6EE7BADD85E9__CTOR_OFFSET UNITYSDK_OFFSET(0x730150)

inline static constexpr unsigned int Struct_2_522A6EE7BADD85E9_TypeDefinitionIndex = 45342;

struct alignas(4) Struct_2_522A6EE7BADD85E9
{
	::Foundation::FixedArray3_1<::System::Single> Field_2_0; // 0x10

	/*
	::System::Void _ctor(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_522A6EE7BADD85E9__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_522A6EE7BADD85E9_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_30C8640C4A833B5C(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_522A6EE7BADD85E9_METHOD_2_30C8640C4A833B5C_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Void Method_2_89CAEAD9DF810BDA(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_522A6EE7BADD85E9_METHOD_2_89CAEAD9DF810BDA_OFFSET))(this, a1, a2);
	}
	*/
};
