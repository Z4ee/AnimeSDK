#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_166.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_15.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_B51557505C9FDEC9_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A3A2380)
#define CLASS_2_B51557505C9FDEC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A21F0)

inline static constexpr unsigned int Class_2_B51557505C9FDEC9_TypeDefinitionIndex = 11362;

class Class_2_B51557505C9FDEC9 : public ::Class_1_5DA2E7556103D5A3_166
{
public:
	::System::Int32 Field_2_1; // 0x108
	::System::Boolean Field_2_2; // 0x10C
	::System::Int32 Field_2_0; // 0x110

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_15 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_15, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_B51557505C9FDEC9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B51557505C9FDEC9_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
