#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F25142AAEFFBD401_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x707130)

inline static constexpr unsigned int Struct_2_F25142AAEFFBD401_TypeDefinitionIndex = 71899;

struct alignas(4) Struct_2_F25142AAEFFBD401
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F25142AAEFFBD401_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
