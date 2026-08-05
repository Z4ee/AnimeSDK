#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineSnapshot.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x753D10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineFollowProcessor_ExecuteJob_TypeDefinitionIndex = 87979;

	struct alignas(8) CrowdSplineFollowProcessor_ExecuteJob
	{
		::System::Single DeltaTime; // 0x10
		::System::Single CurrentTime; // 0x14
		::Unity::Collections::NativeArray_1<::System::Boolean> RuntimeIsUsing; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment> RuntimeSplineFollow; // 0x28
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> RuntimeMoveTarget; // 0x38
		::NPCCrowd::Ability::CrowdSplineSnapshot Snapshot; // 0x48

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
