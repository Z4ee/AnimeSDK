#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/AI/AIActionReturnToPathFollowConfig.h"
#include "unitysdk/NPCCrowd/AI/AIActionWrapperForJob.h"
#include "unitysdk/NPCCrowd/AI/NPCAIActionState.h"
#include "unitysdk/NPCCrowd/AI/TimeControl.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace NPCCrowd { class IdGenerator; }
namespace NPCCrowd::AI { class AIActionConfigAssetSO; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace NPCCrowd::AI { class IAIActionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_CREATEWRAPPERFORJOB_OFFSET UNITYSDK_OFFSET(0xF84A440)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYUNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0xF8498F0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETCOMMONCHANGEPATHFOLLOWACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xF849B70)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETENTITYACTION_OFFSET UNITYSDK_OFFSET(0xF8477C0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xF847640)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ISSTATEEND_OFFSET UNITYSDK_OFFSET(0xF8498B0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF848540)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xF8480D0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF849280)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xF847FA0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xF8485A0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xF84B150)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONSTATEFORJOB_OFFSET UNITYSDK_OFFSET(0xF84AE00)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTION_OFFSET UNITYSDK_OFFSET(0xF84B240)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_1_OFFSET UNITYSDK_OFFSET(0xF84A130)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_2_OFFSET UNITYSDK_OFFSET(0xF84A1E0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_3_OFFSET UNITYSDK_OFFSET(0xF84A380)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_4_OFFSET UNITYSDK_OFFSET(0xF849D50)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0xF849BC0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEACTION_OFFSET UNITYSDK_OFFSET(0xF84AC70)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xF847F00)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0xF84A5D0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF84B7E0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xF84B400)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF84B840)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xF84B8D0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF84B960)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xF84BA00)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xF84BAA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdActionManager_TypeDefinitionIndex = 75829;

	class NPCCrowdActionManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::NPCCrowd::IdGenerator** StaticGet_IDGen()
		{
			return (::NPCCrowd::IdGenerator**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x45EB0);
		}
		static ::System::String** StaticGet_TEMPLATE_ASSET_SO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x45EB8);
		}
		static ::NPCCrowd::AI::AIActionConfigAssetSO** StaticGet_ActionConfigSO()
		{
			return (::NPCCrowd::AI::AIActionConfigAssetSO**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x45EC0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_AssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x45EC8);
		}
		::NPCCrowd::AI::AIActionReturnToPathFollowConfig commonChangePathFollowActionConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>* registedEntities; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* queuedActions; // 0x28
		::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<::System::Int32>*>* intListPool; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* actions; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* cache; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* actionsForJob; // 0x48

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
