#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/NPCCrowd/AI/ReactionRegisterObjectType.h"
#include "unitysdk/NPCCrowd/AI/RegisterItem.h"
#include "unitysdk/NPCCrowd/AI/StimulusConfig.h"
#include "unitysdk/NPCCrowd/AI/StimulusItem.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace NPCCrowd::AI { class CDCountItem; }
namespace NPCCrowd::AI { class ReactionCallbackDelegate; }
namespace NPCCrowd::AI { class ReactionConditionDelegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_REACTIONSYSTEM_CHECKACTIVEREACTION_OFFSET UNITYSDK_OFFSET(0xD40B220)
#define NPCCROWD_AI_REACTIONSYSTEM_CLEARFRAMEDATA_OFFSET UNITYSDK_OFFSET(0xD409610)
#define NPCCROWD_AI_REACTIONSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD40B530)
#define NPCCROWD_AI_REACTIONSYSTEM_FLUSHDELAYREACTIONS_OFFSET UNITYSDK_OFFSET(0xD408B50)
#define NPCCROWD_AI_REACTIONSYSTEM_FLUSHFRAMEDATA_OFFSET UNITYSDK_OFFSET(0xD409F00)
#define NPCCROWD_AI_REACTIONSYSTEM_FLUSHSTIMULUS_OFFSET UNITYSDK_OFFSET(0xD408F70)
#define NPCCROWD_AI_REACTIONSYSTEM_INTERNALTRIGGERDURATIONSTIMULUS_OFFSET UNITYSDK_OFFSET(0xD40A0A0)
#define NPCCROWD_AI_REACTIONSYSTEM_INTERNALTRIGGERSTIMULUS_OFFSET UNITYSDK_OFFSET(0xD40AAF0)
#define NPCCROWD_AI_REACTIONSYSTEM_ONENDOFFRAMEUPDATE_OFFSET UNITYSDK_OFFSET(0xD408AD0)
#define NPCCROWD_AI_REACTIONSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0xD408090)
#define NPCCROWD_AI_REACTIONSYSTEM_TRIGGERSTIMULUS_1_OFFSET UNITYSDK_OFFSET(0xD408620)
#define NPCCROWD_AI_REACTIONSYSTEM_TRIGGERSTIMULUS_2_OFFSET UNITYSDK_OFFSET(0xD4089D0)
#define NPCCROWD_AI_REACTIONSYSTEM_TRIGGERSTIMULUS_OFFSET UNITYSDK_OFFSET(0xD4084E0)
#define NPCCROWD_AI_REACTIONSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0xD4082B0)
#define NPCCROWD_AI_REACTIONSYSTEM_UPDATESTIMULUSCD_OFFSET UNITYSDK_OFFSET(0xD409730)
#define NPCCROWD_AI_REACTIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD40B690)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionSystem_TypeDefinitionIndex = 68716;

	class ReactionSystem : public ::Foundation::Singleton_1<::NPCCrowd::AI::ReactionSystem*>
	{
	public:
		::System::Collections::Generic::HashSet_1<::NPCCrowd::AI::RegisterItem>* DelayUnRegisterReactions; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::CDCountItem*>*>* CDCountItems; // 0x18
		::System::Collections::Generic::HashSet_1<::NPCCrowd::AI::RegisterItem>* DelayRegisterReactions; // 0x20
		::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::CDCountItem*>*>* CDCountListPool; // 0x28
		::Foundation::ObjectPool_1<::NPCCrowd::AI::CDCountItem*>* CDCountItemPool; // 0x30
		::System::Collections::Generic::List_1<::NPCCrowd::AI::StimulusItem>* DurationStimulus; // 0x38
		::System::Collections::Generic::List_1<::NPCCrowd::AI::StimulusItem>* DelayStimulus; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::RegisterItem>* CurFrameActiveReactions; // 0x48
		::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::HashSet_1<::NPCCrowd::AI::RegisterItem>*>* Reactions; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* indexCache; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean Register(::Foundation::Unreal::FGameplayTag tag, ::NPCCrowd::AI::ReactionCallbackDelegate* callback, ::NPCCrowd::AI::ReactionConditionDelegate* condition, ::System::Int32 handlerID, ::System::UInt32 reactionID, ::System::UInt32 priority, ::NPCCrowd::AI::ReactionRegisterObjectType reactionRegisterObjectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::NPCCrowd::AI::ReactionCallbackDelegate*, ::NPCCrowd::AI::ReactionConditionDelegate*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::NPCCrowd::AI::ReactionRegisterObjectType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_REGISTER_OFFSET))(this, tag, callback, condition, handlerID, reactionID, priority, reactionRegisterObjectType);
		}

		::System::Boolean UnRegister(::Foundation::Unreal::FGameplayTag tag, ::NPCCrowd::AI::ReactionCallbackDelegate* callback, ::NPCCrowd::AI::ReactionConditionDelegate* condition, ::System::Int32 handlerID, ::System::UInt32 reactionID, ::System::UInt32 priority, ::NPCCrowd::AI::ReactionRegisterObjectType reactionRegisterObjectType, ::System::Boolean enableMultiThread)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::NPCCrowd::AI::ReactionCallbackDelegate*, ::NPCCrowd::AI::ReactionConditionDelegate*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::NPCCrowd::AI::ReactionRegisterObjectType, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_UNREGISTER_OFFSET))(this, tag, callback, condition, handlerID, reactionID, priority, reactionRegisterObjectType, enableMultiThread);
		}

		::System::Void TriggerStimulus(::System::UInt32 stimulusID, ::UnityEngine::Vector3 position, ::System::Int32 triggerHandlerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_TRIGGERSTIMULUS_OFFSET))(this, stimulusID, position, triggerHandlerID);
		}

		::System::Void TriggerStimulus_1(::NPCCrowd::AI::StimulusConfig stimulus, ::UnityEngine::Vector3 position, ::System::Int32 triggerHandlerID)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::StimulusConfig, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_TRIGGERSTIMULUS_1_OFFSET))(this, stimulus, position, triggerHandlerID);
		}

		::System::Void TriggerStimulus_2(::Foundation::Unreal::FGameplayTag tag, ::System::Single radius, ::UnityEngine::Vector3 position, ::System::Int32 triggerHandlerID)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_TRIGGERSTIMULUS_2_OFFSET))(this, tag, radius, position, triggerHandlerID);
		}

		::System::Void OnEndOfFrameUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_ONENDOFFRAMEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void FlushFrameData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_FLUSHFRAMEDATA_OFFSET))(this);
		}

		::System::Void FlushDelayReactions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_FLUSHDELAYREACTIONS_OFFSET))(this);
		}

		::System::Void FlushStimulus(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_FLUSHSTIMULUS_OFFSET))(this, deltaTime);
		}

		::System::Void ClearFrameData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_CLEARFRAMEDATA_OFFSET))(this);
		}

		::System::Void UpdateStimulusCD(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_UPDATESTIMULUSCD_OFFSET))(this, deltaTime);
		}

		::System::Void InternalTriggerStimulus(::NPCCrowd::AI::StimulusItem stimulus)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::StimulusItem))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_INTERNALTRIGGERSTIMULUS_OFFSET))(this, stimulus);
		}

		::System::Void InternalTriggerDurationStimulus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_INTERNALTRIGGERDURATIONSTIMULUS_OFFSET))(this);
		}

		::System::Void CheckActiveReaction(::NPCCrowd::AI::RegisterItem item, ::NPCCrowd::AI::StimulusItem stimulus)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::RegisterItem, ::NPCCrowd::AI::StimulusItem))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_CHECKACTIVEREACTION_OFFSET))(this, item, stimulus);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM_DISPOSE_OFFSET))(this);
		}
	};
}
