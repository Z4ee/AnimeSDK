#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B136CFD8FB6B8F37_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x86EF40)
#define STRUCT_2_B136CFD8FB6B8F37__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E24110)
#define STRUCT_2_B136CFD8FB6B8F37__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_B136CFD8FB6B8F37_TypeDefinitionIndex = 50096;

struct alignas(4) Struct_2_B136CFD8FB6B8F37
{
	static ::Struct_2_B136CFD8FB6B8F37* StaticGet_Field_2_1()
	{
		return (::Struct_2_B136CFD8FB6B8F37*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B136CFD8FB6B8F37_TypeDefinitionIndex)->GetStaticField(0xE730);
	}
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
