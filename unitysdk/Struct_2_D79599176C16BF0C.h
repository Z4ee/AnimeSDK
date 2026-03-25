#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D79599176C16BF0C_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x20DDA90)

inline static constexpr unsigned int Struct_2_D79599176C16BF0C_TypeDefinitionIndex = 31997;

struct alignas(8) Struct_2_D79599176C16BF0C
{
	::System::UInt32 Field_2_0; // 0x10
	::System::Int64 Field_2_1; // 0x18
	::System::Int64 Field_2_2; // 0x20

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D79599176C16BF0C_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
