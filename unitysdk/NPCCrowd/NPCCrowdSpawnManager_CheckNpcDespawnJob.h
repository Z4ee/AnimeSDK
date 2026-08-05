#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKNPCDESPAWNJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8791E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_CheckNpcDespawnJob_TypeDefinitionIndex = 48989;

	struct alignas(8) NPCCrowdSpawnManager_CheckNpcDespawnJob
	{
		::Unity::Collections::NativeArray_1<::System::UInt32> entityIDs; // 0x10
		::Unity::Collections::NativeArray_1<::System::Int32> pathNodeIDs; // 0x20
		::System::Single deltaTime; // 0x30
		::System::Single playerPosY; // 0x34

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKNPCDESPAWNJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
