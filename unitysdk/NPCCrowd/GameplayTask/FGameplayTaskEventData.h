#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/GameplayTask/EGameplayTaskEvent.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::GameplayTask { class NPCGameplayTaskBase; }

#define NPCCROWD_GAMEPLAYTASK_FGAMEPLAYTASKEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5700)

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int FGameplayTaskEventData_TypeDefinitionIndex = 55729;

	struct alignas(8) FGameplayTaskEventData
	{
		::NPCCrowd::GameplayTask::EGameplayTaskEvent Event; // 0x10
		::NPCCrowd::GameplayTask::NPCGameplayTaskBase* RelatedTask; // 0x18

		::System::Void _ctor(::NPCCrowd::GameplayTask::EGameplayTaskEvent InEvent, ::NPCCrowd::GameplayTask::NPCGameplayTaskBase* InRelatedTask)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GameplayTask::EGameplayTaskEvent, ::NPCCrowd::GameplayTask::NPCGameplayTaskBase*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_FGAMEPLAYTASKEVENTDATA__CTOR_OFFSET))(this, InEvent, InRelatedTask);
		}
	};
}
