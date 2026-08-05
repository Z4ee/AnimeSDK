#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"

#define CLASS_3_DC5CBD5626D4C7C3_STRUCT_2_3EE68E3AB4258EB6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x81C950)

inline static constexpr unsigned int Class_3_DC5CBD5626D4C7C3_Struct_2_3EE68E3AB4258EB6_TypeDefinitionIndex = 49121;

struct alignas(8) Class_3_DC5CBD5626D4C7C3_Struct_2_3EE68E3AB4258EB6
{
	::Unity::Collections::NativeQueue_1_ParallelWriter<::System::Int32> Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DC5CBD5626D4C7C3_STRUCT_2_3EE68E3AB4258EB6_EXECUTE_OFFSET))(this, a1);
	}
};
