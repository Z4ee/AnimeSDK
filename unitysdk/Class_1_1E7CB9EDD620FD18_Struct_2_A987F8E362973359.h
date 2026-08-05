#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define CLASS_1_1E7CB9EDD620FD18_STRUCT_2_A987F8E362973359_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7B0560)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Struct_2_A987F8E362973359_TypeDefinitionIndex = 87387;

struct alignas(8) Class_1_1E7CB9EDD620FD18_Struct_2_A987F8E362973359
{
	::Unity::Mathematics::float3 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x1C
	::System::Int32 Field_2_6; // 0x20
	::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> Field_2_5; // 0x28
	::Unity::Collections::NativeArray_1<::Class_1_1E7CB9EDD620FD18_Struct_2_B99C535163FE2D85> Field_2_4; // 0x38

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_STRUCT_2_A987F8E362973359_EXECUTE_OFFSET))(this, a1);
	}
};
