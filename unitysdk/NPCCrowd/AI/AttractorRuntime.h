#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorDefinition.h"
#include "unitysdk/NPCCrowd/AI/AttractorRuntime_LinkData.h"
#include "unitysdk/NPCCrowd/AI/AttractorStateFlag.h"
#include "unitysdk/NPCCrowd/AI/ConditionActionItem.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/EAttractorSlotState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace NPCCrowd::AI { class AttractorClusterConfig; }
namespace NPCCrowd::AI { class AttractorLinkConfig; }
namespace NPCCrowd::AI { class AttractorTemplate; }
namespace NPCCrowd::AI { class SpawnConfigForAttractor; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AI_ATTRACTORRUNTIME_ADDACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0xA660F00)
#define NPCCROWD_AI_ATTRACTORRUNTIME_AFTERREGISTER_OFFSET UNITYSDK_OFFSET(0xA65E3C0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_CANRELEASESERVERATTRACTEDENTITY_OFFSET UNITYSDK_OFFSET(0xA6617B0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_CLEARACTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0xA660F60)
#define NPCCROWD_AI_ATTRACTORRUNTIME_CLUSTERENABLE_OFFSET UNITYSDK_OFFSET(0xA663990)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETACTIONREFITEM_OFFSET UNITYSDK_OFFSET(0xA661470)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETATTRACTORCONDITIONITEM_OFFSET UNITYSDK_OFFSET(0xA661430)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETCLUSTERCHILDRENIDS_OFFSET UNITYSDK_OFFSET(0xA6639F0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETCLUSTERIDS_OFFSET UNITYSDK_OFFSET(0xA660320)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETCLUSTERSTRIDS_OFFSET UNITYSDK_OFFSET(0xA661F80)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETCONFLICTNODEIDS_OFFSET UNITYSDK_OFFSET(0xA65FC90)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETLINKIDS_OFFSET UNITYSDK_OFFSET(0xA660030)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETLINKSTRIDS_OFFSET UNITYSDK_OFFSET(0xA661E60)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0xA663A40)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA663A80)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0xA65DB40)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GETQUERYBOX_OFFSET UNITYSDK_OFFSET(0xA660FD0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_GET_ISLINKROOT_OFFSET UNITYSDK_OFFSET(0xA65FC80)
#define NPCCROWD_AI_ATTRACTORRUNTIME_HASBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xA6614D0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_INITCLUSTERDATA_OFFSET UNITYSDK_OFFSET(0xA663720)
#define NPCCROWD_AI_ATTRACTORRUNTIME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA65DCD0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_INITLINKDATA_OFFSET UNITYSDK_OFFSET(0xA6625D0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_ISENABLED_OFFSET UNITYSDK_OFFSET(0xA65F710)
#define NPCCROWD_AI_ATTRACTORRUNTIME_ISINCD_OFFSET UNITYSDK_OFFSET(0xA65F850)
#define NPCCROWD_AI_ATTRACTORRUNTIME_LINKENABLE_OFFSET UNITYSDK_OFFSET(0xA663180)
#define NPCCROWD_AI_ATTRACTORRUNTIME_LINKVALID_OFFSET UNITYSDK_OFFSET(0xA661120)
#define NPCCROWD_AI_ATTRACTORRUNTIME_LOGICENABLE_OFFSET UNITYSDK_OFFSET(0xA660E70)
#define NPCCROWD_AI_ATTRACTORRUNTIME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA65E480)
#define NPCCROWD_AI_ATTRACTORRUNTIME_ONLINKSETENABLE_OFFSET UNITYSDK_OFFSET(0xA663290)
#define NPCCROWD_AI_ATTRACTORRUNTIME_ONLINKSETVALID_OFFSET UNITYSDK_OFFSET(0xA662E00)
#define NPCCROWD_AI_ATTRACTORRUNTIME_ONSETENABLE_OFFSET UNITYSDK_OFFSET(0xA6608F0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_QUERYCONFLICT_OFFSET UNITYSDK_OFFSET(0xA661820)
#define NPCCROWD_AI_ATTRACTORRUNTIME_RANDOMGETNEXTLINKHANDLE_OFFSET UNITYSDK_OFFSET(0xA662AE0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_RANDOMSETENTERCD_OFFSET UNITYSDK_OFFSET(0xA65E310)
#define NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHCHILDENABLE_OFFSET UNITYSDK_OFFSET(0xA65E990)
#define NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHCONFLICT_OFFSET UNITYSDK_OFFSET(0xA65F480)
#define NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xA663AF0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHLINKENABLE_OFFSET UNITYSDK_OFFSET(0xA65EBE0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHMAINCONFLICTLIST_OFFSET UNITYSDK_OFFSET(0xA65F8B0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHSPAWN_OFFSET UNITYSDK_OFFSET(0xA660940)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SERVERENABLE_OFFSET UNITYSDK_OFFSET(0xA660680)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETCD_OFFSET UNITYSDK_OFFSET(0xA6613B0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETCONFLICTED_OFFSET UNITYSDK_OFFSET(0xA65EFD0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETCONFLICTS_OFFSET UNITYSDK_OFFSET(0xA65E6F0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETDEBUGIGNORECONFLICTED_OFFSET UNITYSDK_OFFSET(0xA65F220)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETENABLE_OFFSET UNITYSDK_OFFSET(0xA6606E0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETEXTERNALATTRACTORCONFLICTED_OFFSET UNITYSDK_OFFSET(0xA65ED80)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETEXTERNALCONFLICTED_OFFSET UNITYSDK_OFFSET(0xA65E740)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETLINKVALID_OFFSET UNITYSDK_OFFSET(0xA661020)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETSERVERATTRACTEDNPC_OFFSET UNITYSDK_OFFSET(0xA661660)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETSERVERCONTROLENABLE_OFFSET UNITYSDK_OFFSET(0xA660480)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SETSTATE_OFFSET UNITYSDK_OFFSET(0xA660AA0)
#define NPCCROWD_AI_ATTRACTORRUNTIME_SLOTSTATEENABLE_OFFSET UNITYSDK_OFFSET(0xA661410)
#define NPCCROWD_AI_ATTRACTORRUNTIME_TOGGLELOOPSOUND_OFFSET UNITYSDK_OFFSET(0xA662080)
#define NPCCROWD_AI_ATTRACTORRUNTIME_UPDATECONFLICTDATA_OFFSET UNITYSDK_OFFSET(0xA65FD90)
#define NPCCROWD_AI_ATTRACTORRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xA663B30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorRuntime_TypeDefinitionIndex = 55754;

	class AttractorRuntime : public ::System::Object
	{
	public:
		static ::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck** StaticGet_NpcCrowdDistanceCheck()
		{
			return (::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck**)Il2CppClass::FromTypeDefinitionIndex(AttractorRuntime_TypeDefinitionIndex)->GetStaticField(0x4F410);
		}
		::System::Collections::Generic::List_1<::System::Int32>* actionHandlers; // 0x10
		::UnityEngine::GameObject* soundEmitter; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* childInstanceIDs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* linkAttractorValid; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* conflicts; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* allNodes; // 0x38
		::System::String* handlerStr; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* clusterHandlerStrs; // 0x48
		::System::Random* rnd; // 0x50
		::Foundation::Unreal::FGameplayTagQuery* tagQuery; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorRuntime_LinkData>* nextLinkHandles; // 0x60
		::NPCCrowd::AI::AttractorDefinition config; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* linkAttractorEnable; // 0xE8
		::NPCCrowd::AI::SpawnPointGroup* groupConfig; // 0xF0
		::NPCCrowd::AI::AttractorTemplate* template_; // 0xF8
		::System::Collections::Generic::List_1<::System::String*>* linkHandlerStrs; // 0x100
		::NPCCrowd::AI::SpawnConfigForAttractor* configForAttractor; // 0x108
		::System::Collections::Generic::List_1<::System::Int32>* checkListCache; // 0x110
		::System::Int32 distanceHandler; // 0x118
		::System::Boolean serverEnable; // 0x11C
		::System::Boolean conflicted; // 0x11D
		::System::Boolean tagFilter; // 0x11E
		::System::Boolean serverAttractedEndFlag; // 0x11F
		::System::Int32 conflictedID; // 0x120
		::System::UInt32 clameEntityID; // 0x124
		::System::Boolean enabled; // 0x128
		::System::Boolean parentEnable; // 0x129
		::System::Boolean linkEnable; // 0x12A
		::System::Boolean curClaimEntityIsSpawned; // 0x12B
		::System::Int32 parentHandler; // 0x12C
		::NPCCrowd::AI::AttractorStateFlag enableState; // 0x130
		::System::Int32 handler; // 0x134
		::UnityEngine::Vector3 position; // 0x138
		::NPCCrowd::AI::AttractorRuntime_LinkData curLinkData; // 0x144
		::System::Single CDTimer; // 0x150
		::System::Int32 spawnPointHandler; // 0x154
		::System::Int32 rootHandler; // 0x158
		::System::Int32 prevLinkHandle; // 0x15C
		::System::Int32 abilityIdx; // 0x160
		::System::UInt32 serverAttractedEntityID; // 0x164
		::System::Int32 conflictedArea; // 0x168
		::NPCCrowd::AI::EAttractorSlotState slotState; // 0x16C
		::UnityEngine::Quaternion rotation; // 0x170
		::System::Boolean debugIgnoreConflict; // 0x180
		::System::Boolean externalConflicted; // 0x181
		::System::Boolean serverControl; // 0x182
		::UnityEngine::Vector3 queryPosition; // 0x184
		::System::Boolean isBelongLink; // 0x190
		::System::Boolean isBelongCluster; // 0x191
		::System::Boolean externalAttractorConflicted; // 0x192
		::System::Boolean linkValid; // 0x193

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::NPCCrowd::AI::AttractorDefinition config, ::System::Int32 handler, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::NPCCrowd::AI::AttractorTemplate* template_)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorDefinition, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::NPCCrowd::AI::AttractorTemplate*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_INITIALIZE_OFFSET))(this, config, handler, position, rotation, template_);
		}

		::System::Void AfterRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_AFTERREGISTER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetConflicts(::System::Collections::Generic::List_1<::System::Int32>* conflicts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETCONFLICTS_OFFSET))(this, conflicts);
		}

		::System::Void SetExternalConflicted(::System::Boolean conflict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETEXTERNALCONFLICTED_OFFSET))(this, conflict);
		}

		::System::Void SetExternalAttractorConflicted(::System::Boolean conflict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETEXTERNALATTRACTORCONFLICTED_OFFSET))(this, conflict);
		}

		::System::Void SetConflicted(::System::Boolean conflict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETCONFLICTED_OFFSET))(this, conflict);
		}

		::System::Void SetDebugIgnoreConflicted(::System::Boolean ignoreConflict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETDEBUGIGNORECONFLICTED_OFFSET))(this, ignoreConflict);
		}

		::System::Void RefreshConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHCONFLICT_OFFSET))(this);
		}

		::System::Void RefreshMainConflictList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHMAINCONFLICTLIST_OFFSET))(this);
		}

		::System::Void UpdateConflictData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_UPDATECONFLICTDATA_OFFSET))(this);
		}

		::System::Void SetServerControlEnable(::System::Boolean control, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETSERVERCONTROLENABLE_OFFSET))(this, control, enable);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void OnSetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_ONSETENABLE_OFFSET))(this, enable);
		}

		::System::Void RefreshSpawn(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHSPAWN_OFFSET))(this, enable);
		}

		::System::Boolean LogicEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_LOGICENABLE_OFFSET))(this);
		}

		::System::Boolean ServerEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SERVERENABLE_OFFSET))(this);
		}

		::System::Void AddActionHandler(::System::Int32 actionHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_ADDACTIONHANDLER_OFFSET))(this, actionHandler);
		}

		::System::Void ClearActionHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_CLEARACTIONHANDLERS_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetQueryBox()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETQUERYBOX_OFFSET))(this);
		}

		::System::Void SetState(::NPCCrowd::AI::EAttractorSlotState state)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::EAttractorSlotState))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETSTATE_OFFSET))(this, state);
		}

		::System::Void RandomSetEnterCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_RANDOMSETENTERCD_OFFSET))(this);
		}

		::System::Boolean SlotStateEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SLOTSTATEENABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::ConditionActionItem>* GetAttractorConditionItem()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::ConditionActionItem>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETATTRACTORCONDITIONITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::AIActionRefItem*>* GetActionRefItem(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::AIActionRefItem*>*(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETACTIONREFITEM_OFFSET))(this, context);
		}

		::System::Boolean HasBehaviours(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_HASBEHAVIOURS_OFFSET))(this, context);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_ISENABLED_OFFSET))(this);
		}

		::System::Boolean IsInCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_ISINCD_OFFSET))(this);
		}

		::System::Void SetCD(::System::Single cd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETCD_OFFSET))(this, cd);
		}

		::System::Void SetServerAttractedNPC(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETSERVERATTRACTEDNPC_OFFSET))(this, entityId);
		}

		::System::Boolean CanReleaseServerAttractedEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_CANRELEASESERVERATTRACTEDENTITY_OFFSET))(this);
		}

		::System::Boolean QueryConflict(::System::Collections::Generic::List_1<::System::Int32>* checkList, ::System::Int32& conflictedAreaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_QUERYCONFLICT_OFFSET))(this, checkList, conflictedAreaID);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetConflictNodeIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETCONFLICTNODEIDS_OFFSET))(this);
		}

		::System::Int32 GetPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETPRIORITY_OFFSET))(this);
		}

		::System::Void ToggleLoopSound(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_TOGGLELOOPSOUND_OFFSET))(this, enable);
		}

		::System::Boolean get_isLinkRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GET_ISLINKROOT_OFFSET))(this);
		}

		::System::Void InitLinkData(::NPCCrowd::AI::AttractorLinkConfig* linkConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorLinkConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_INITLINKDATA_OFFSET))(this, linkConfig);
		}

		::System::Int32 RandomGetNextLinkHandle(::NPCCrowd::AI::AttractorRuntime_LinkData& linkData)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime_LinkData&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_RANDOMGETNEXTLINKHANDLE_OFFSET))(this, linkData);
		}

		::System::Void SetLinkValid(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_SETLINKVALID_OFFSET))(this, valid);
		}

		::System::Boolean LinkValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_LINKVALID_OFFSET))(this);
		}

		::System::Boolean LinkEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_LINKENABLE_OFFSET))(this);
		}

		::System::Void OnLinkSetEnable(::System::Int32 instanceID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_ONLINKSETENABLE_OFFSET))(this, instanceID, enable);
		}

		::System::Void OnLinkSetValid(::System::Int32 instanceID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_ONLINKSETVALID_OFFSET))(this, instanceID, enable);
		}

		::System::Void RefreshLinkEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHLINKENABLE_OFFSET))(this);
		}

		::System::Void GetLinkIDs(::System::Collections::Generic::List_1<::System::Int32>*& linkIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETLINKIDS_OFFSET))(this, linkIDs);
		}

		::System::Void GetLinkStrIDs(::System::Collections::Generic::List_1<::System::String*>*& linkIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETLINKSTRIDS_OFFSET))(this, linkIDs);
		}

		::System::Void InitClusterData(::NPCCrowd::AI::AttractorClusterConfig* clusterConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorClusterConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_INITCLUSTERDATA_OFFSET))(this, clusterConfig);
		}

		::System::Boolean ClusterEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_CLUSTERENABLE_OFFSET))(this);
		}

		::System::Void RefreshChildEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHCHILDENABLE_OFFSET))(this);
		}

		::System::Void GetClusterIDs(::System::Collections::Generic::List_1<::System::Int32>*& clusterIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETCLUSTERIDS_OFFSET))(this, clusterIDs);
		}

		::System::Void GetClusterStrIDs(::System::Collections::Generic::List_1<::System::String*>*& clusterIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETCLUSTERSTRIDS_OFFSET))(this, clusterIDs);
		}

		::System::Void GetClusterChildrenIDs(::System::Collections::Generic::List_1<::System::Int32>*& clusterIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETCLUSTERCHILDRENIDS_OFFSET))(this, clusterIDs);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_GETPOSITION_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIME_REFRESHDATA_OFFSET))(this);
		}
	};
}
