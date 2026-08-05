#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F25142AAEFFBD401_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x746390)
#define STRUCT_2_F25142AAEFFBD401_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x7463F0)
#define STRUCT_2_F25142AAEFFBD401_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x72FEF0)

inline static constexpr unsigned int Struct_2_F25142AAEFFBD401_TypeDefinitionIndex = 49036;

struct alignas(4) Struct_2_F25142AAEFFBD401
{
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F25142AAEFFBD401_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F25142AAEFFBD401_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F25142AAEFFBD401_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
