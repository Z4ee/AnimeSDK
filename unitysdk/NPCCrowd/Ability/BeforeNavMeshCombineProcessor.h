#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_BEFORENAVMESHCOMBINEPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE5571D0)
#define NPCCROWD_ABILITY_BEFORENAVMESHCOMBINEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE5576C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int BeforeNavMeshCombineProcessor_TypeDefinitionIndex = 71108;

	class BeforeNavMeshCombineProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_BEFORENAVMESHCOMBINEPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_BEFORENAVMESHCOMBINEPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
