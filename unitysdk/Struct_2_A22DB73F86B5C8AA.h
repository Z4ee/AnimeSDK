#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_A22DB73F86B5C8AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7E33A0)
#define STRUCT_2_A22DB73F86B5C8AA_METHOD_2_99CAD68ED754C42E_OFFSET UNITYSDK_OFFSET(0x7E33E0)
#define STRUCT_2_A22DB73F86B5C8AA_METHOD_2_C127C560FAA10B4C_OFFSET UNITYSDK_OFFSET(0x18266590)

inline static constexpr unsigned int Struct_2_A22DB73F86B5C8AA_TypeDefinitionIndex = 44895;

struct alignas(4) Struct_2_A22DB73F86B5C8AA
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A22DB73F86B5C8AA_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_99CAD68ED754C42E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A22DB73F86B5C8AA_METHOD_2_99CAD68ED754C42E_OFFSET))(this);
	}

	static ::Struct_2_A22DB73F86B5C8AA Method_2_C127C560FAA10B4C(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Struct_2_A22DB73F86B5C8AA(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A22DB73F86B5C8AA_METHOD_2_C127C560FAA10B4C_OFFSET))(a1, a2, a3);
	}
};
