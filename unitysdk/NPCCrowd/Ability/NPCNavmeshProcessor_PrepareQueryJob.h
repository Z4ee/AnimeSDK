#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_PREPAREQUERYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x652530)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCNavmeshProcessor_PrepareQueryJob_TypeDefinitionIndex = 47962;

	struct alignas(8) NPCNavmeshProcessor_PrepareQueryJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x20
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x30
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> runtime_navmesh; // 0x40
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment> runtime_navmeshQueryData; // 0x50

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_PREPAREQUERYJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
