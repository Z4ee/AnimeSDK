#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1E7CB9EDD620FD18_Struct_2_FF35D64B04BF12C3_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_1E7CB9EDD620FD18_STRUCT_2_15293EFBF1F3577A_EXECUTE_OFFSET UNITYSDK_OFFSET(0x848420)
#define CLASS_1_1E7CB9EDD620FD18_STRUCT_2_15293EFBF1F3577A_METHOD_2_B2E1F4B7BD95D0F7_OFFSET UNITYSDK_OFFSET(0x1661BE10)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Struct_2_15293EFBF1F3577A_TypeDefinitionIndex = 87394;

struct alignas(8) Class_1_1E7CB9EDD620FD18_Struct_2_15293EFBF1F3577A
{
	::UnityEngine::Vector3 Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x1C
	::Unity::Collections::NativeArray_1<::Class_1_1E7CB9EDD620FD18_Struct_2_FF35D64B04BF12C3_1> Field_2_0; // 0x20

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_STRUCT_2_15293EFBF1F3577A_EXECUTE_OFFSET))(this, a1);
	}

	static ::System::Single Method_2_B2E1F4B7BD95D0F7(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_STRUCT_2_15293EFBF1F3577A_METHOD_2_B2E1F4B7BD95D0F7_OFFSET))(a1, a2, a3);
	}
};
