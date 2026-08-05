#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1_ParallelWriter.h"

#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x653640)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_UpdatePointJob_TypeDefinitionIndex = 48988;

	struct alignas(8) NPCCrowdSpawnManager_UpdatePointJob
	{
		::Unity::Collections::NativeArray_1<::System::Int32> spawnPointKey; // 0x10
		::Unity::Collections::NativeList_1_ParallelWriter<::System::Int32> validIndices; // 0x20
		::System::Single deltaTime; // 0x30

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
