#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_COPYTRANSFORMDATAJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x754C90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformProcessor_CopyTransformDataJob_TypeDefinitionIndex = 45018;

	struct alignas(8) NPCAbilityFlushTransformProcessor_CopyTransformDataJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> sourceTransform; // 0x10
		::Unity::Collections::NativeArray_1<::System::Boolean> sourceIsUsing; // 0x20
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> destTransform; // 0x30
		::Unity::Collections::NativeArray_1<::System::Boolean> destIsUsing; // 0x40
		::System::Int32 destOffset; // 0x50
		::System::Int32 count; // 0x54

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_COPYTRANSFORMDATAJOB_EXECUTE_OFFSET))(this);
		}
	};
}
