#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::AI { class AttractorRuntimeData; }

#define NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF75D3D0)
#define NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF75D5A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorConflictQueryProcessor_TypeDefinitionIndex = 73247;

	class AttractorConflictQueryProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::AI::AttractorRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
