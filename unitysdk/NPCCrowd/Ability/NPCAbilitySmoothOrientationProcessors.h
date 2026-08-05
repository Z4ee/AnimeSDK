#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementActionHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilitySmoothOrientationProcessors_OrientationParameters.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1063FC40)
#define NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1063EE90)
#define NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS_INITPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1063EC30)
#define NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS__CTOR_OFFSET UNITYSDK_OFFSET(0x1063FF40)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilitySmoothOrientationProcessors_TypeDefinitionIndex = 55477;

	class NPCAbilitySmoothOrientationProcessors : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle InitProcessor(::UnityEngine::Vector3 targetForward, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::NPCCrowd::Ability::NPCAbilityParameters* parameters, ::System::Int32 idx)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::UnityEngine::Vector3, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityParameters*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS_INITPROCESSOR_OFFSET))(this, targetForward, runtime, parameters, idx);
		}

		static ::System::Void Execute(::System::Int32 idx, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>& runtime_transform, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> runtime_movement, ::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors_OrientationParameters orientationParams, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment>, ::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors_OrientationParameters, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS_EXECUTE_OFFSET))(idx, runtime_transform, runtime_moveTarget, runtime_movement, orientationParams, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPROCESSORS_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
