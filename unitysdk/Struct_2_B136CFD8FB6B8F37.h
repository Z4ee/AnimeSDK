#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B136CFD8FB6B8F37_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define STRUCT_2_B136CFD8FB6B8F37_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x73F670)
#define STRUCT_2_B136CFD8FB6B8F37__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E80DD0)
#define STRUCT_2_B136CFD8FB6B8F37__CTOR_OFFSET UNITYSDK_OFFSET(0x2E85F0)

inline static constexpr unsigned int Struct_2_B136CFD8FB6B8F37_TypeDefinitionIndex = 59522;

struct alignas(4) Struct_2_B136CFD8FB6B8F37
{
	static ::Struct_2_B136CFD8FB6B8F37* StaticGet_Field_2_0()
	{
		return (::Struct_2_B136CFD8FB6B8F37*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B136CFD8FB6B8F37_TypeDefinitionIndex)->GetStaticField(0xEC50);
	}
	::System::Int32 Field_2_1; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37__CCTOR_OFFSET))();
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
