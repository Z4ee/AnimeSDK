#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define NPCCROWD_ABILITY_NPCABILITYAPPLYMOVEPLATFORMPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x694F00)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityApplyMovePlatformProcessor_ExecuteJob_TypeDefinitionIndex = 73174;

	struct alignas(8) NPCAbilityApplyMovePlatformProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x10
		::Unity::Collections::NativeList_1<::System::Int32> attachedIndices; // 0x20
		::Unity::Collections::NativeList_1<::NPCCrowd::Ability::FTransformFragment> attachedTransforms; // 0x30
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x40

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYAPPLYMOVEPLATFORMPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
