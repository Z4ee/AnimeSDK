#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3D5F31420A8FFFAB.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_4.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_4D333BE0A0120D49_STRUCT_2_71D0ED892BE52B50_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5A19A0)

inline static constexpr unsigned int Class_2_4D333BE0A0120D49_Struct_2_71D0ED892BE52B50_TypeDefinitionIndex = 73750;

struct alignas(8) Class_2_4D333BE0A0120D49_Struct_2_71D0ED892BE52B50
{
	::Unity::Collections::NativeList_1<::Struct_2_3D5F31420A8FFFAB> Field_2_0; // 0x10
	::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4C8453486C91E3A1_4> Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_2; // 0x38

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_STRUCT_2_71D0ED892BE52B50_EXECUTE_OFFSET))(this, a1);
	}
};
