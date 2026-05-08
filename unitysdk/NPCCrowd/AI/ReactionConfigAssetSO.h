#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/EventStimulusConfig.h"
#include "unitysdk/NPCCrowd/AI/GlobalReactionConfig.h"
#include "unitysdk/NPCCrowd/AI/ReactionConfig.h"
#include "unitysdk/NPCCrowd/AI/StimulusConfig.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_REACTIONCONFIGASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xFB4D840)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionConfigAssetSO_TypeDefinitionIndex = 48273;

	class ReactionConfigAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::NPCCrowd::AI::GlobalReactionConfig GlobalConfig; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::AI::ReactionConfig>* ReactionConfigs; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::AI::StimulusConfig>* StimulusConfigs; // 0x70
		::System::Collections::Generic::List_1<::NPCCrowd::AI::EventStimulusConfig>* EventStimulusConfigs; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO__CTOR_OFFSET))(this);
		}
	};
}
