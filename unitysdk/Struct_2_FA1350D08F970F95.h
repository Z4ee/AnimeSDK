#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3002D7CF5FEE9D3A;

#define STRUCT_2_FA1350D08F970F95_METHOD_2_195BFA40318D62FD_OFFSET UNITYSDK_OFFSET(0x722230)
#define STRUCT_2_FA1350D08F970F95__CCTOR_OFFSET UNITYSDK_OFFSET(0x11873520)
#define STRUCT_2_FA1350D08F970F95__CTOR_OFFSET UNITYSDK_OFFSET(0x722200)

inline static constexpr unsigned int Struct_2_FA1350D08F970F95_TypeDefinitionIndex = 62160;

struct alignas(4) Struct_2_FA1350D08F970F95
{
	static ::Struct_2_FA1350D08F970F95* StaticGet_Field_2_0()
	{
		return (::Struct_2_FA1350D08F970F95*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FA1350D08F970F95_TypeDefinitionIndex)->GetStaticField(0xCD00);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Int32 Field_2_3; // 0x18
	::System::Int32 Field_2_4; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::Class_1_3002D7CF5FEE9D3A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + STRUCT_2_FA1350D08F970F95__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FA1350D08F970F95__CCTOR_OFFSET))();
	}

	::System::Void Method_2_195BFA40318D62FD(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + STRUCT_2_FA1350D08F970F95_METHOD_2_195BFA40318D62FD_OFFSET))(this, a1);
	}
};
