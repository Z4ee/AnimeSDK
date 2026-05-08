#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"

#define CLASS_3_04C4166B6662A8DB_STRUCT_2_CF07B27CA9AE60B5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x793DD0)

inline static constexpr unsigned int Class_3_04C4166B6662A8DB_Struct_2_CF07B27CA9AE60B5_TypeDefinitionIndex = 66713;

struct alignas(8) Class_3_04C4166B6662A8DB_Struct_2_CF07B27CA9AE60B5
{
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_0; // 0x10
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_1; // 0x28

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04C4166B6662A8DB_STRUCT_2_CF07B27CA9AE60B5_EXECUTE_OFFSET))(this);
	}
};
