#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYAPPLYMOVEPLATFORMPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD883470)
#define NPCCROWD_ABILITY_NPCABILITYAPPLYMOVEPLATFORMPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD883680)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityApplyMovePlatformProcessor_TypeDefinitionIndex = 89005;

	class NPCAbilityApplyMovePlatformProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYAPPLYMOVEPLATFORMPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::Unity::Collections::NativeList_1<::System::Int32> attachedIndices, ::Unity::Collections::NativeList_1<::NPCCrowd::Ability::FTransformFragment> attachedTransforms, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::Unity::Collections::NativeList_1<::System::Int32>, ::Unity::Collections::NativeList_1<::NPCCrowd::Ability::FTransformFragment>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYAPPLYMOVEPLATFORMPROCESSOR_EXECUTE_OFFSET))(this, runtime, attachedIndices, attachedTransforms, dependsOn);
		}
	};
}
