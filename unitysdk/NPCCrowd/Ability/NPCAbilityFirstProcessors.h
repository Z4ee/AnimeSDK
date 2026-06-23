#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1029A2F0)
#define NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1029A1D0)
#define NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS__CTOR_OFFSET UNITYSDK_OFFSET(0x1029A500)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFirstProcessors_TypeDefinitionIndex = 63492;

	class NPCAbilityFirstProcessors : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS__CTOR_OFFSET))(this);
		}

		static ::System::Void Execute(::System::Int32 idx, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment>& runtime_steering, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>& runtime_lastTransform, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS_EXECUTE_OFFSET))(idx, runtime_steering, runtime_lastTransform, runtime_transform);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFIRSTPROCESSORS_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
