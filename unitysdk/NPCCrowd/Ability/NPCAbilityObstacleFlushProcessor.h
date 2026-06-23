#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityObstacleFlushProcessor_ExecuteJob.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_CLEAN_OFFSET UNITYSDK_OFFSET(0x109F5550)
#define NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x109F4F40)
#define NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x109F52B0)
#define NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x109F5590)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityObstacleFlushProcessor_TypeDefinitionIndex = 43401;

	class NPCAbilityObstacleFlushProcessor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::System::Int32>>* abilityIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}

		::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor_ExecuteJob Prepare(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime)
		{
			return ((::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor_ExecuteJob(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_PREPARE_OFFSET))(this, runtime);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_CLEAN_OFFSET))(this);
		}
	};
}
