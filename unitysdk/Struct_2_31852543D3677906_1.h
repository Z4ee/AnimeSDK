#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31852543D3677906_1_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x2E7740)
#define STRUCT_2_31852543D3677906_1_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x5C3EC0)
#define STRUCT_2_31852543D3677906_1_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x2E7930)
#define STRUCT_2_31852543D3677906_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3E0940)

inline static constexpr unsigned int Struct_2_31852543D3677906_1_TypeDefinitionIndex = 63843;

struct alignas(1) Struct_2_31852543D3677906_1
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_1_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_1_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_1_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
