#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B71390AB49608E52.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D4F8C41AAD377B89;

#define STRUCT_2_CAA1767F36D16491_METHOD_2_5D582D26566137B5_OFFSET UNITYSDK_OFFSET(0x8813E0)

inline static constexpr unsigned int Struct_2_CAA1767F36D16491_TypeDefinitionIndex = 43575;

struct alignas(8) Struct_2_CAA1767F36D16491
{
	::Class_1_D4F8C41AAD377B89* Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x18
	::Enum_3_B71390AB49608E52 Field_2_7; // 0x1C

	::System::Int32 Method_2_5D582D26566137B5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CAA1767F36D16491_METHOD_2_5D582D26566137B5_OFFSET))(this);
	}
};
