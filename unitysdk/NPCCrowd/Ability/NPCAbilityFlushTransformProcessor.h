#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_EXECUTECOMBINED_OFFSET UNITYSDK_OFFSET(0x1192DC90)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1192DAF0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1192DDE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformProcessor_TypeDefinitionIndex = 45017;

	class NPCAbilityFlushTransformProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}

		::Unity::Jobs::JobHandle ExecuteCombined(::Unity::Collections::NativeArray_1<::System::Boolean> combinedIsUsing, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> combinedTransform, ::UnityEngine::Jobs::TransformAccessArray combinedAccessArray, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Boolean>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>, ::UnityEngine::Jobs::TransformAccessArray, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMPROCESSOR_EXECUTECOMBINED_OFFSET))(this, combinedIsUsing, combinedTransform, combinedAccessArray, dependsOn);
		}
	};
}
