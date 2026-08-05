#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"

#define CLASS_3_C2907946C3AFC0A5_STRUCT_2_F14B8DA01853391D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7A5630)

inline static constexpr unsigned int Class_3_C2907946C3AFC0A5_Struct_2_F14B8DA01853391D_TypeDefinitionIndex = 65123;

struct alignas(8) Class_3_C2907946C3AFC0A5_Struct_2_F14B8DA01853391D
{
	::System::Boolean Field_2_2; // 0x10
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_1; // 0x18
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_0; // 0x30

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2907946C3AFC0A5_STRUCT_2_F14B8DA01853391D_EXECUTE_OFFSET))(this);
	}
};
