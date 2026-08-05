#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_1E7CB9EDD620FD18_STRUCT_2_B99C535163FE2D85_COMPARETO_OFFSET UNITYSDK_OFFSET(0x7E13D0)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85_TypeDefinitionIndex = 87379;

struct alignas(4) Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85
{
	::System::Single Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Int32 CompareTo(::Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_STRUCT_2_B99C535163FE2D85_COMPARETO_OFFSET))(this, a1);
	}
};
