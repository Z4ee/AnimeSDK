#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Ability { class NPCMoveAvoidanceParam; }

#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11500F10)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS__CTOR_OFFSET UNITYSDK_OFFSET(0x11501130)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveAvoidanceProcessors_TypeDefinitionIndex = 41975;

	class NPCAbilityMoveAvoidanceProcessors : public ::System::Object
	{
	public:
		::NPCCrowd::Ability::NPCMoveAvoidanceParam* _param; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
