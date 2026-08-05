#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_86;
class Class_1_2879FE367E12164C;

#define STRUCT_2_CDDE7DCB305CB7FD_METHOD_2_99815BF97241D95D_OFFSET UNITYSDK_OFFSET(0xA8C5B0)
#define STRUCT_2_CDDE7DCB305CB7FD_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0xA8C610)

inline static constexpr unsigned int Struct_2_CDDE7DCB305CB7FD_TypeDefinitionIndex = 29237;

struct alignas(8) Struct_2_CDDE7DCB305CB7FD
{
	::Class_1_2879FE367E12164C* Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_86* Field_2_7; // 0x20

	::System::Boolean Method_2_99815BF97241D95D(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CDDE7DCB305CB7FD_METHOD_2_99815BF97241D95D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CDDE7DCB305CB7FD_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}
};
