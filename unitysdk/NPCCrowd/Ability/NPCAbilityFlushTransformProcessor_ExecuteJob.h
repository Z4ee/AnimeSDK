#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6DA6C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformProcessor_ExecuteJob_TypeDefinitionIndex = 45019;

	struct alignas(8) NPCAbilityFlushTransformProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _transformFragments; // 0x20

		/*
		::System::Void Execute(::System::Int32 abilityIdx, ::UnityEngine::Jobs::TransformAccess transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, abilityIdx, transform);
		}
		*/
	};
}
