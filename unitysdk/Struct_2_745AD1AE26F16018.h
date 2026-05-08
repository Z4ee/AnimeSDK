#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_DEF6B8E2ED2D1FB3_1;

#define STRUCT_2_745AD1AE26F16018_METHOD_2_EA1CE0AF6E069614_OFFSET UNITYSDK_OFFSET(0x7ACB40)
#define STRUCT_2_745AD1AE26F16018__CTOR_OFFSET UNITYSDK_OFFSET(0x7ACB10)

inline static constexpr unsigned int Struct_2_745AD1AE26F16018_TypeDefinitionIndex = 74525;

struct alignas(8) Struct_2_745AD1AE26F16018
{
	::System::Int32 Field_2_0; // 0x10
	::Class_3_DEF6B8E2ED2D1FB3_1* Field_2_1; // 0x18

	::System::Void _ctor(::Class_3_DEF6B8E2ED2D1FB3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DEF6B8E2ED2D1FB3_1*))((::PBYTE)hIl2Cpp + STRUCT_2_745AD1AE26F16018__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_EA1CE0AF6E069614(::Struct_2_6659645E143D6266& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6659645E143D6266&))((::PBYTE)hIl2Cpp + STRUCT_2_745AD1AE26F16018_METHOD_2_EA1CE0AF6E069614_OFFSET))(this, a1);
	}
	*/
};
