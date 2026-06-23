#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B210258C7CFBA850_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x677870)

inline static constexpr unsigned int Struct_2_B210258C7CFBA850_TypeDefinitionIndex = 81888;

struct alignas(4) Struct_2_B210258C7CFBA850
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B210258C7CFBA850_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
