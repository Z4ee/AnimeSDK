#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10297750)
#define NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10298120)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AfterNavMeshCombineProcessor_TypeDefinitionIndex = 43094;

	class AfterNavMeshCombineProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
