#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CD42631606067E6B_Enum_3_149856925731683D.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3002D7CF5FEE9D3A;

#define STRUCT_2_3B44A52CDA4846B1_METHOD_2_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_3B44A52CDA4846B1_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define STRUCT_2_3B44A52CDA4846B1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325D00)
#define STRUCT_2_3B44A52CDA4846B1_METHOD_2_CDEFC868A141EA66_OFFSET UNITYSDK_OFFSET(0x849010)
#define STRUCT_2_3B44A52CDA4846B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x166B8120)
#define STRUCT_2_3B44A52CDA4846B1__CTOR_OFFSET UNITYSDK_OFFSET(0x848FF0)

inline static constexpr unsigned int Struct_2_3B44A52CDA4846B1_TypeDefinitionIndex = 69178;

struct alignas(4) Struct_2_3B44A52CDA4846B1
{
	static ::Struct_2_3B44A52CDA4846B1* StaticGet_Field_2_1()
	{
		return (::Struct_2_3B44A52CDA4846B1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_3B44A52CDA4846B1_TypeDefinitionIndex)->GetStaticField(0x11FC0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x14
	::System::Int32 Field_2_6; // 0x18
	::System::Int32 Field_2_5; // 0x1C
	::System::Int32 Field_2_4; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::Class_1_3002D7CF5FEE9D3A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + STRUCT_2_3B44A52CDA4846B1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_3B44A52CDA4846B1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CDEFC868A141EA66(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + STRUCT_2_3B44A52CDA4846B1_METHOD_2_CDEFC868A141EA66_OFFSET))(this, a1);
	}

	::Class_2_CD42631606067E6B_Enum_3_149856925731683D Method_2_40C5968D970A15A2()
	{
		return ((::Class_2_CD42631606067E6B_Enum_3_149856925731683D(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3B44A52CDA4846B1_METHOD_2_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3B44A52CDA4846B1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_3B44A52CDA4846B1_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
