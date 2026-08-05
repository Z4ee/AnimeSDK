#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_66.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_10.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_B51557505C9FDEC9_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x195A4E00)
#define CLASS_2_B51557505C9FDEC9__CTOR_OFFSET UNITYSDK_OFFSET(0x195A4C60)

inline static constexpr unsigned int Class_2_B51557505C9FDEC9_TypeDefinitionIndex = 9518;

class Class_2_B51557505C9FDEC9 : public ::Class_1_5DA2E7556103D5A3_66
{
public:
	::System::Int32 Field_2_7; // 0x108
	::System::Int32 Field_2_0; // 0x10C
	::System::Boolean Field_2_6; // 0x110

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_10 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_10, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_B51557505C9FDEC9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B51557505C9FDEC9_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
