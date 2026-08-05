#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdDistanceProcessor_TaskRuntime.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Lod { class NPCCrowdDistanceManager; }

#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE2D_OFFSET UNITYSDK_OFFSET(0xE94EDC0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE_OFFSET UNITYSDK_OFFSET(0xE94ED50)
#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x60FB40)
#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_UPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xE94EE20)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdDistanceProcessor_RefreshDistanceJob_TypeDefinitionIndex = 63860;

	struct alignas(8) NPCCrowdDistanceProcessor_RefreshDistanceJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime> tasks; // 0x10

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_EXECUTE_OFFSET))(this, index);
		}

		/*
		static ::System::Void CheckDistance(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime& task, ::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE_OFFSET))(task, pos1, pos2);
		}
		*/

		/*
		static ::System::Void CheckDistance2D(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime& task, ::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE2D_OFFSET))(task, pos1, pos2);
		}
		*/

		static ::System::Void UpdateCallback(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime& task, ::NPCCrowd::Lod::NPCCrowdDistanceManager* manager, ::System::Int32 index)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime&, ::NPCCrowd::Lod::NPCCrowdDistanceManager*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_UPDATECALLBACK_OFFSET))(task, manager, index);
		}
	};
}
