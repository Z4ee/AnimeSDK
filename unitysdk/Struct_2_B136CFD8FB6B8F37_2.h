#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B136CFD8FB6B8F37_2_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_B136CFD8FB6B8F37_2_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x841850)
#define STRUCT_2_B136CFD8FB6B8F37_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18023310)
#define STRUCT_2_B136CFD8FB6B8F37_2__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_B136CFD8FB6B8F37_2_TypeDefinitionIndex = 61695;

struct alignas(4) Struct_2_B136CFD8FB6B8F37_2
{
	static ::Struct_2_B136CFD8FB6B8F37_2* StaticGet_Field_2_0()
	{
		return (::Struct_2_B136CFD8FB6B8F37_2*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B136CFD8FB6B8F37_2_TypeDefinitionIndex)->GetStaticField(0xD7E0);
	}
	::System::Int32 Field_2_1; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_2__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_2__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_2_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_2_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}
};
