#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B136CFD8FB6B8F37_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FB88D0)
#define STRUCT_2_B136CFD8FB6B8F37_3__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_B136CFD8FB6B8F37_3_TypeDefinitionIndex = 81408;

struct alignas(4) Struct_2_B136CFD8FB6B8F37_3
{
	static ::Struct_2_B136CFD8FB6B8F37_3* StaticGet_Field_2_0()
	{
		return (::Struct_2_B136CFD8FB6B8F37_3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B136CFD8FB6B8F37_3_TypeDefinitionIndex)->GetStaticField(0x117A0);
	}
	::System::Int32 Field_2_7; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_3__CCTOR_OFFSET))();
	}
};
