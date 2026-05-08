#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ReactionConfig.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI { class AIActionRefItem; }

#define NPCCROWD_AI_REACTIONCONFIGWRAPPER_INITDATA_OFFSET UNITYSDK_OFFSET(0x6871A0)
#define NPCCROWD_AI_REACTIONCONFIGWRAPPER_RELEASEDATA_OFFSET UNITYSDK_OFFSET(0x6871B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionConfigWrapper_TypeDefinitionIndex = 59661;

	struct alignas(8) ReactionConfigWrapper
	{
		::NPCCrowd::AI::ReactionConfig ReactionConfig; // 0x10
		::Il2CppArray<::System::Int32>* actionHandlers; // 0x50

		::System::Void InitData(::Il2CppArray<::NPCCrowd::AI::AIActionRefItem*>* actions, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NPCCrowd::AI::AIActionRefItem*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGWRAPPER_INITDATA_OFFSET))(this, actions, entityID);
		}

		::System::Void ReleaseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGWRAPPER_RELEASEDATA_OFFSET))(this);
		}
	};
}
