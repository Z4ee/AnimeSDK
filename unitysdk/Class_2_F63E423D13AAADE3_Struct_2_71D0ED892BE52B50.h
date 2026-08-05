#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_14.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_F63E423D13AAADE3_STRUCT_2_71D0ED892BE52B50_EXECUTE_OFFSET UNITYSDK_OFFSET(0x814D60)

inline static constexpr unsigned int Class_2_F63E423D13AAADE3_Struct_2_71D0ED892BE52B50_TypeDefinitionIndex = 54972;

struct alignas(8) Class_2_F63E423D13AAADE3_Struct_2_71D0ED892BE52B50
{
	::Unity::Collections::NativeList_1<::Struct_2_A725E4562D03EA4E_2> Field_2_1; // 0x10
	::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4C8453486C91E3A1_14> Field_2_0; // 0x20
	::UnityEngine::Vector3 Field_2_7; // 0x38

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_STRUCT_2_71D0ED892BE52B50_EXECUTE_OFFSET))(this, a1);
	}
};
