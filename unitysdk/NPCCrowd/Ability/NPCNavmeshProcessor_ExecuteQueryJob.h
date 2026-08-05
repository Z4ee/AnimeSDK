#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshQuery.h"

#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTEQUERYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6A9150)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCNavmeshProcessor_ExecuteQueryJob_TypeDefinitionIndex = 47961;

	struct alignas(8) NPCNavmeshProcessor_ExecuteQueryJob
	{
		// static const ::System::Int32 MaxIterCnt = 0x64; // 0x0
		::System::Int32 idx; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment> queryDatas; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmesh; // 0x28
		::UnityEngine::Experimental::AI::NavMeshQuery query; // 0x38

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTEQUERYJOB_EXECUTE_OFFSET))(this);
		}
	};
}
