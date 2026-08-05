#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define CLASS_1_1E7CB9EDD620FD18_STRUCT_2_DC8435028B3AA73F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6CCE10)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Struct_2_DC8435028B3AA73F_TypeDefinitionIndex = 87382;

struct alignas(8) Class_1_1E7CB9EDD620FD18_Struct_2_DC8435028B3AA73F
{
	::Unity::Collections::NativeArray_1<::Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85> Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_0; // 0x28

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_STRUCT_2_DC8435028B3AA73F_EXECUTE_OFFSET))(this);
	}
};
