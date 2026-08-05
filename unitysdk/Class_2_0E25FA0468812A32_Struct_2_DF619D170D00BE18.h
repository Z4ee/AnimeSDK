#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4A663F55BC7468E2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_0E25FA0468812A32_STRUCT_2_DF619D170D00BE18_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7CD860)

inline static constexpr unsigned int Class_2_0E25FA0468812A32_Struct_2_DF619D170D00BE18_TypeDefinitionIndex = 57871;

struct alignas(8) Class_2_0E25FA0468812A32_Struct_2_DF619D170D00BE18
{
	::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2> Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x28

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_STRUCT_2_DF619D170D00BE18_EXECUTE_OFFSET))(this, a1);
	}
};
