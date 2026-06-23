#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/AI/AIActionReturnToPathFollowConfig.h"
#include "unitysdk/NPCCrowd/AI/AIActionWrapperForJob.h"
#include "unitysdk/NPCCrowd/AI/NPCAIActionState.h"
#include "unitysdk/NPCCrowd/AI/TimeControl.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class IdGenerator; }
namespace NPCCrowd::AI { class AIActionConfigAssetSO; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace NPCCrowd::AI { class IAIActionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_CREATEWRAPPERFORJOB_OFFSET UNITYSDK_OFFSET(0xE8A41D0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYAWAKEACTION_OFFSET UNITYSDK_OFFSET(0xE8A3770)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYSLEEPACTION_OFFSET UNITYSDK_OFFSET(0xE8A3680)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYUNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0xE8A3500)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETCOMMONCHANGEPATHFOLLOWACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE8A3860)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETENTITYACTION_OFFSET UNITYSDK_OFFSET(0xE8A0BB0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xE8A0A30)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ISSTATEEND_OFFSET UNITYSDK_OFFSET(0xE8A6830)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_MOVEACTIONTOSLEEP_OFFSET UNITYSDK_OFFSET(0xE8A3270)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE8A1980)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xE8A1510)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE8A29C0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xE8A13E0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xE8A19E0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xE8A6FD0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONSTATEFORJOB_OFFSET UNITYSDK_OFFSET(0xE8A6870)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTION_OFFSET UNITYSDK_OFFSET(0xE8A70C0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_1_OFFSET UNITYSDK_OFFSET(0xE8A3EC0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_2_OFFSET UNITYSDK_OFFSET(0xE8A3F70)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_3_OFFSET UNITYSDK_OFFSET(0xE8A4110)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_4_OFFSET UNITYSDK_OFFSET(0xE8A3A40)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0xE8A38B0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEACTION_OFFSET UNITYSDK_OFFSET(0xE8A6250)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0xE8A63E0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SETHANDLEREFFECTFORCECULLED_OFFSET UNITYSDK_OFFSET(0xE8A5ED0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDREMOVEACTION_OFFSET UNITYSDK_OFFSET(0xE8A3410)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xE8A12F0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SYNCPLAYEFFECTFORCECULLEDBYLOD_OFFSET UNITYSDK_OFFSET(0xE8A5D90)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_TRYGETACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE8A5640)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0xE8A4360)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERENTITYPLAYEFFECTACTIONS_OFFSET UNITYSDK_OFFSET(0xE8A5390)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_WAKEACTION_OFFSET UNITYSDK_OFFSET(0xE8A2820)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8A7990)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A73D0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE8A79F0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xE8A7A80)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE8A7B10)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xE8A7BB0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xE8A7C50)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdActionManager_TypeDefinitionIndex = 45078;

	class NPCCrowdActionManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::NPCCrowd::IdGenerator** StaticGet_IDGen()
		{
			return (::NPCCrowd::IdGenerator**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x46EC0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_AssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x46EC8);
		}
		static ::System::String** StaticGet_TEMPLATE_ASSET_SO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x46EE8);
		}
		static ::NPCCrowd::AI::AIActionConfigAssetSO** StaticGet_ActionConfigSO()
		{
			return (::NPCCrowd::AI::AIActionConfigAssetSO**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x46EF0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* sleepActions; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>* registedEntities; // 0x20
		::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<::System::Int32>*>* intListPool; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* entityCache; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* queuedActions; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* cache; // 0x40
		::NPCCrowd::AI::AIActionReturnToPathFollowConfig commonChangePathFollowActionConfig; // 0x48
		::System::Collections::Generic::HashSet_1<::System::Int32>* delaySleepActions; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* actions; // 0x58
		::System::Collections::Generic::HashSet_1<::System::Int32>* delayAwakeActions; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* sleepActionsForJob; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* actionsForJob; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::AI::NPCCrowdActionManager* Get()
		{
			return ((::NPCCrowd::AI::NPCCrowdActionManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void DelaySleepAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYSLEEPACTION_OFFSET))(this, handler);
		}

		::System::Void DelayAwakeAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYAWAKEACTION_OFFSET))(this, handler);
		}

		::NPCCrowd::AI::AIActionReturnToPathFollowConfig GetCommonChangePathFollowActionConfig()
		{
			return ((::NPCCrowd::AI::AIActionReturnToPathFollowConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETCOMMONCHANGEPATHFOLLOWACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean RegisterAction(::System::Int32 actionConfigIdx, ::System::UInt32 entityID, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_OFFSET))(this, actionConfigIdx, entityID, handler, disableTick);
		}

		::System::Boolean RegisterAction_1(::NPCCrowd::AI::AIActionRefItem* actionConfig, ::System::UInt32 entityID, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::AIActionRefItem*, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_1_OFFSET))(this, actionConfig, entityID, handler, disableTick);
		}

		::System::Boolean RegisterAction_2(::System::Int32 actionConfigIdx, ::System::UInt32 entityID, ::NPCCrowd::AI::TimeControl overrideTimeControl, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::AI::TimeControl, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_2_OFFSET))(this, actionConfigIdx, entityID, overrideTimeControl, handler, disableTick);
		}

		::System::Boolean RegisterAction_3(::NPCCrowd::AI::AIActionRefItem* actionConfig, ::System::UInt32 entityID, ::NPCCrowd::AI::TimeControl overrideTimeControl, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::AIActionRefItem*, ::System::UInt32, ::NPCCrowd::AI::TimeControl, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_3_OFFSET))(this, actionConfig, entityID, overrideTimeControl, handler, disableTick);
		}

		::System::Boolean RegisterAction_4(::NPCCrowd::AI::IAIActionConfig* config, ::System::UInt32 entityID, ::NPCCrowd::AI::TimeControl timeControl, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::IAIActionConfig*, ::System::UInt32, ::NPCCrowd::AI::TimeControl, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_4_OFFSET))(this, config, entityID, timeControl, handler, disableTick);
		}

		::System::Void UnRegisterAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERACTION_OFFSET))(this, handler);
		}

		::System::Void UnRegisterEntityPlayEffectActions(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERENTITYPLAYEFFECTACTIONS_OFFSET))(this, entityID);
		}

		::System::Void SyncPlayEffectForceCulledByLod(::System::UInt32 entityID, ::System::Boolean forceCulled)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SYNCPLAYEFFECTFORCECULLEDBYLOD_OFFSET))(this, entityID, forceCulled);
		}

		::System::Void SetHandlerEffectForceCulled(::System::Int32 handler, ::System::Boolean forceCulled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SETHANDLEREFFECTFORCECULLED_OFFSET))(this, handler, forceCulled);
		}

		::System::Boolean TryGetActionConfig(::System::Int32 handler, ::NPCCrowd::AI::IAIActionConfig*& config)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::IAIActionConfig*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_TRYGETACTIONCONFIG_OFFSET))(this, handler, config);
		}

		::System::Boolean GetEntityAction(::System::UInt32 entityID, ::System::Collections::Generic::List_1<::System::Int32>*& handlers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETENTITYACTION_OFFSET))(this, entityID, handlers);
		}

		::System::Void DelayUnRegisterAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYUNREGISTERACTION_OFFSET))(this, handler);
		}

		::System::Void RemoveAction(::System::Int32 handler, ::NPCCrowd::AI::AIActionWrapperForJob action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEACTION_OFFSET))(this, handler, action);
		}

		::System::Void RemoveEntityAction(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEENTITYACTION_OFFSET))(this, entityID);
		}

		static ::System::Boolean ShouldRemoveAction(::NPCCrowd::AI::AIActionWrapperForJob wrapper)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::AIActionWrapperForJob))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDREMOVEACTION_OFFSET))(wrapper);
		}

		::System::Void MoveActionToSleep(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_MOVEACTIONTOSLEEP_OFFSET))(this, handler);
		}

		::System::Void WakeAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_WAKEACTION_OFFSET))(this, handler);
		}

		static ::System::Boolean IsStateEnd(::NPCCrowd::AI::NPCAIActionState state)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::NPCAIActionState))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_ISSTATEEND_OFFSET))(state);
		}

		::System::Boolean CreateWrapperForJob(::NPCCrowd::AI::IAIActionConfig* config, ::System::UInt32 entityID, ::System::Boolean disableTick, ::NPCCrowd::AI::TimeControl timeControl, ::NPCCrowd::AI::AIActionWrapperForJob& wrapper)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::IAIActionConfig*, ::System::UInt32, ::System::Boolean, ::NPCCrowd::AI::TimeControl, ::NPCCrowd::AI::AIActionWrapperForJob&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_CREATEWRAPPERFORJOB_OFFSET))(this, config, entityID, disableTick, timeControl, wrapper);
		}

		::System::Boolean QueryActionStateForJob(::System::Int32 handler, ::NPCCrowd::AI::NPCAIActionState& state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::NPCAIActionState&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONSTATEFORJOB_OFFSET))(this, handler, state);
		}

		::System::Boolean QueryActionFinishState(::System::Int32 handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONFINISHSTATE_OFFSET))(this, handler);
		}

		::System::Boolean QueryAction(::System::Int32 handler, ::NPCCrowd::AI::AIActionWrapperForJob& action)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTION_OFFSET))(this, handler, action);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
