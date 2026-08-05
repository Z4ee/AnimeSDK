#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshData.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_APPLYQUERYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8257F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCNavmeshProcessor_ApplyQueryJob_TypeDefinitionIndex = 47960;

	struct alignas(8) NPCNavmeshProcessor_ApplyQueryJob
	{
		::System::Single deltaTime; // 0x10
		::System::Single currentTime; // 0x14
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x28
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x38
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> runtime_navmesh; // 0x48
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget; // 0x58
		::NPCCrowd::Ability::FNPCNavmeshData navmeshData; // 0x68
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment> queryDatas; // 0xB8
		::System::Int32 idx; // 0xC8
		::System::Int32 maxPathSize; // 0xCC

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_APPLYQUERYJOB_EXECUTE_OFFSET))(this);
		}
	};
}
