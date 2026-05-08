#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31852543D3677906_2_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x2E7740)
#define STRUCT_2_31852543D3677906_2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x2E7930)

inline static constexpr unsigned int Struct_2_31852543D3677906_2_TypeDefinitionIndex = 53280;

struct alignas(1) Struct_2_31852543D3677906_2
{
	::System::Boolean Field_2_0; // 0x10

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_2_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
