#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_522A6EE7BADD85E9_METHOD_2_30C8640C4A833B5C_OFFSET UNITYSDK_OFFSET(0x765C20)
#define STRUCT_2_522A6EE7BADD85E9_METHOD_2_89CAEAD9DF810BDA_OFFSET UNITYSDK_OFFSET(0x765CB0)
#define STRUCT_2_522A6EE7BADD85E9_METHOD_2_E26DC44DCE94AB5A_OFFSET UNITYSDK_OFFSET(0x765C10)
#define STRUCT_2_522A6EE7BADD85E9__CTOR_OFFSET UNITYSDK_OFFSET(0x765CA0)

inline static constexpr unsigned int Struct_2_522A6EE7BADD85E9_TypeDefinitionIndex = 63474;

struct alignas(4) Struct_2_522A6EE7BADD85E9
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::Foundation::FixedArray3_1<::System::Single> Field_2_2; // 0x18
	::Foundation::FixedArray3_1<::System::Single> Field_2_3; // 0x24

	/*
	::System::Void _ctor(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_522A6EE7BADD85E9__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Single Method_2_E26DC44DCE94AB5A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_522A6EE7BADD85E9_METHOD_2_E26DC44DCE94AB5A_OFFSET))(this, a1);
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
