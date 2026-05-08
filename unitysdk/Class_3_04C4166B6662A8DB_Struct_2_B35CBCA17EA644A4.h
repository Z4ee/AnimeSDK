#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"

#define CLASS_3_04C4166B6662A8DB_STRUCT_2_B35CBCA17EA644A4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x71EC10)

inline static constexpr unsigned int Class_3_04C4166B6662A8DB_Struct_2_B35CBCA17EA644A4_TypeDefinitionIndex = 66712;

struct alignas(8) Class_3_04C4166B6662A8DB_Struct_2_B35CBCA17EA644A4
{
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_0; // 0x10
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_1; // 0x28
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::UInt32> Field_2_2; // 0x40
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_3; // 0x58

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_04C4166B6662A8DB_STRUCT_2_B35CBCA17EA644A4_EXECUTE_OFFSET))(this, a1);
	}
};
