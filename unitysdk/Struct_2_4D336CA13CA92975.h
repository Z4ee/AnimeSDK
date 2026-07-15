#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4D336CA13CA92975_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3954DB0)

inline static constexpr unsigned int Struct_2_4D336CA13CA92975_TypeDefinitionIndex = 67884;

struct alignas(4) Struct_2_4D336CA13CA92975
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D336CA13CA92975_EXECUTE_OFFSET))(this);
	}
};
