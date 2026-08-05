#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5A26F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFirstProcessors_ExecuteJob_TypeDefinitionIndex = 75355;

	struct alignas(8) NPCAbilityFirstProcessors_ExecuteJob
	{
		::System::Single deltaTime; // 0x10
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment> runtime_steering; // 0x28
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_lastTransform; // 0x38
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x48

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
