#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"

#define CLASS_3_C2907946C3AFC0A5_STRUCT_2_25CBB17F76C24CFF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7B5C40)

inline static constexpr unsigned int Class_3_C2907946C3AFC0A5_Struct_2_25CBB17F76C24CFF_TypeDefinitionIndex = 65129;

struct alignas(8) Class_3_C2907946C3AFC0A5_Struct_2_25CBB17F76C24CFF
{
	::System::Boolean Field_2_1; // 0x10
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_0; // 0x18
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_7; // 0x30
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::UInt32> Field_2_6; // 0x48
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_5; // 0x60

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2907946C3AFC0A5_STRUCT_2_25CBB17F76C24CFF_EXECUTE_OFFSET))(this, a1);
	}
};
