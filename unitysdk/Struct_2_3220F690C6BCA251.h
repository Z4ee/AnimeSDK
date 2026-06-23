#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define STRUCT_2_3220F690C6BCA251_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x7F61D0)
#define STRUCT_2_3220F690C6BCA251_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x7F6100)
#define STRUCT_2_3220F690C6BCA251_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x5940A0)
#define STRUCT_2_3220F690C6BCA251__CCTOR_OFFSET UNITYSDK_OFFSET(0x151D2B80)
#define STRUCT_2_3220F690C6BCA251__CTOR_OFFSET UNITYSDK_OFFSET(0x3E4300)

inline static constexpr unsigned int Struct_2_3220F690C6BCA251_TypeDefinitionIndex = 50467;

struct alignas(8) Struct_2_3220F690C6BCA251
{
	static ::Struct_2_3220F690C6BCA251* StaticGet_Field_2_2()
	{
		return (::Struct_2_3220F690C6BCA251*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_3220F690C6BCA251_TypeDefinitionIndex)->GetStaticField(0x10320);
	}
	::System::Int32 Field_2_0; // 0x10
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Animations::AnimatorControllerPlayable a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_3220F690C6BCA251__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_3220F690C6BCA251__CCTOR_OFFSET))();
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3220F690C6BCA251_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3220F690C6BCA251_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3220F690C6BCA251_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}
};
