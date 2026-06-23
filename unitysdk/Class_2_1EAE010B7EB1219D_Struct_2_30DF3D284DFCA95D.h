#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4A663F55BC7468E2.h"
#include "unitysdk/Struct_2_FC1AAE928068554C.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_1EAE010B7EB1219D_STRUCT_2_30DF3D284DFCA95D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x869E90)

inline static constexpr unsigned int Class_2_1EAE010B7EB1219D_Struct_2_30DF3D284DFCA95D_TypeDefinitionIndex = 59052;

struct alignas(8) Class_2_1EAE010B7EB1219D_Struct_2_30DF3D284DFCA95D
{
	::Unity::Collections::NativeList_1<::Struct_2_FC1AAE928068554C> Field_2_0; // 0x10
	::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2> Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_2; // 0x38

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_STRUCT_2_30DF3D284DFCA95D_EXECUTE_OFFSET))(this, a1);
	}
};
