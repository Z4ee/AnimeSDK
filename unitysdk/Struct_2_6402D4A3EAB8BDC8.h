#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6402D4A3EAB8BDC8_METHOD_2_0D3CEA11284B35A1_1_OFFSET UNITYSDK_OFFSET(0x13AEFFA0)
#define STRUCT_2_6402D4A3EAB8BDC8_METHOD_2_0D3CEA11284B35A1_OFFSET UNITYSDK_OFFSET(0x13AEFF90)
#define STRUCT_2_6402D4A3EAB8BDC8_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x755970)
#define STRUCT_2_6402D4A3EAB8BDC8__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AEFF70)
#define STRUCT_2_6402D4A3EAB8BDC8__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_6402D4A3EAB8BDC8_TypeDefinitionIndex = 66458;

struct alignas(4) Struct_2_6402D4A3EAB8BDC8
{
	static ::Struct_2_6402D4A3EAB8BDC8* StaticGet_Field_2_0()
	{
		return (::Struct_2_6402D4A3EAB8BDC8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6402D4A3EAB8BDC8_TypeDefinitionIndex)->GetStaticField(0xA1D0);
	}
	::System::Int32 Field_2_1; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6402D4A3EAB8BDC8__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6402D4A3EAB8BDC8__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6402D4A3EAB8BDC8_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Struct_2_6402D4A3EAB8BDC8 Method_2_0D3CEA11284B35A1(::System::Int32 a1)
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6402D4A3EAB8BDC8_METHOD_2_0D3CEA11284B35A1_OFFSET))(a1);
	}

	static ::System::Int32 Method_2_0D3CEA11284B35A1_1(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::System::Int32(*)(::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_6402D4A3EAB8BDC8_METHOD_2_0D3CEA11284B35A1_1_OFFSET))(a1);
	}
};
