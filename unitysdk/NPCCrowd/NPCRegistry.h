#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/NPCCrowd/NPCRegistry_EntryWithDist.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_19291F68B291BF8F;
class Class_3_F66EF797857EB737;
namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCREGISTRY_ADDFRONTPRIORITYHANDLE_OFFSET UNITYSDK_OFFSET(0x1194AF90)
#define NPCCROWD_NPCREGISTRY_BEGINPOLLINGSYNC_OFFSET UNITYSDK_OFFSET(0x1194B020)
#define NPCCROWD_NPCREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1194DF20)
#define NPCCROWD_NPCREGISTRY_COMPARERESTOREORDER_OFFSET UNITYSDK_OFFSET(0x1194C980)
#define NPCCROWD_NPCREGISTRY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1194BCC0)
#define NPCCROWD_NPCREGISTRY_ENDPOLLINGSYNC_OFFSET UNITYSDK_OFFSET(0x1194B810)
#define NPCCROWD_NPCREGISTRY_GETBACKSTAGEENTRIESFORRESTORE_OFFSET UNITYSDK_OFFSET(0x1194C030)
#define NPCCROWD_NPCREGISTRY_GETBACKSTAGEENTRIES_OFFSET UNITYSDK_OFFSET(0x1194BD30)
#define NPCCROWD_NPCREGISTRY_GETCULLCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1194D0B0)
#define NPCCROWD_NPCREGISTRY_GETDEBUGSTATS_OFFSET UNITYSDK_OFFSET(0x1194DD10)
#define NPCCROWD_NPCREGISTRY_GETDISTANCESQCACHED_OFFSET UNITYSDK_OFFSET(0x1194D6B0)
#define NPCCROWD_NPCREGISTRY_GETFRONTSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1194A0E0)
#define NPCCROWD_NPCREGISTRY_GETFRONTSTAGELIFETIME_OFFSET UNITYSDK_OFFSET(0x1194E1C0)
#define NPCCROWD_NPCREGISTRY_GET_FRONTCULLABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1194ABA0)
#define NPCCROWD_NPCREGISTRY_GET_FRONTDELAYABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1194AB80)
#define NPCCROWD_NPCREGISTRY_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1194AB60)
#define NPCCROWD_NPCREGISTRY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1194ACC0)
#define NPCCROWD_NPCREGISTRY_REMOVEFRONTPRIORITYHANDLE_OFFSET UNITYSDK_OFFSET(0x1194B4B0)
#define NPCCROWD_NPCREGISTRY_SETBACKSTAGE_OFFSET UNITYSDK_OFFSET(0x1194B540)
#define NPCCROWD_NPCREGISTRY_SHOULDBLOCKRESTOREBYNEARDISTANCE_OFFSET UNITYSDK_OFFSET(0x1194C770)
#define NPCCROWD_NPCREGISTRY_TRYGETENTRY_OFFSET UNITYSDK_OFFSET(0x1194ABC0)
#define NPCCROWD_NPCREGISTRY_TRYGETFRONTENTRY_OFFSET UNITYSDK_OFFSET(0x1194E280)
#define NPCCROWD_NPCREGISTRY_TRYGETMOSTCULLABLE_OFFSET UNITYSDK_OFFSET(0x1194D770)
#define NPCCROWD_NPCREGISTRY_TRYGETMOSTDISTANTFROMBUCKET_OFFSET UNITYSDK_OFFSET(0x1194D8B0)
#define NPCCROWD_NPCREGISTRY_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1194BB90)
#define NPCCROWD_NPCREGISTRY_UPSERTFROMPOLLING_OFFSET UNITYSDK_OFFSET(0x1194B0B0)
#define NPCCROWD_NPCREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1194A970)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCRegistry_TypeDefinitionIndex = 63848;

	class NPCRegistry : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::NPCRegistryEntry>* _entries; // 0x10
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _pollingRemoveBuffer; // 0x18
		::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* _pollingSeenHandles; // 0x20
		::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* _frontCullableHandles; // 0x28
		::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* _backStageHandles; // 0x30
		::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* _frontDelayableHandles; // 0x38
		::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>* _sortBuffer; // 0x40
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistry_EntryWithDist>* _cullCandidateBuffer; // 0x50
		::System::UInt64 _registerSeqCounter; // 0x58
		::System::UInt64 _backStageSeqCounter; // 0x60
		::System::Boolean _bInPollingSync; // 0x68
		::System::Int32 _frontStageCount; // 0x6C

		::System::Void _ctor(::NPCCrowd::NPCPerformanceConfigSO* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceConfigSO*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY__CTOR_OFFSET))(this, config);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FrontDelayableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GET_FRONTDELAYABLECOUNT_OFFSET))(this);
		}

		::System::Int32 get_FrontCullableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GET_FRONTCULLABLECOUNT_OFFSET))(this);
		}

		::System::Boolean TryGetEntry(::Foundation::ViewObject::ViewObjectHandle handle, ::NPCCrowd::NPCRegistryEntry& entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::NPCRegistryEntry&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_TRYGETENTRY_OFFSET))(this, handle, entry);
		}

		::System::Void Register(::Foundation::ViewObject::ViewObjectHandle handle, ::NPCCrowd::EDynamicUnloadPriority dynamicUnloadPriority, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::EDynamicUnloadPriority, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_REGISTER_OFFSET))(this, handle, dynamicUnloadPriority, groupID);
		}

		::System::Void BeginPollingSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_BEGINPOLLINGSYNC_OFFSET))(this);
		}

		::System::Void UpsertFromPolling(::Foundation::ViewObject::ViewObjectHandle handle, ::NPCCrowd::EDynamicUnloadPriority dynamicUnloadPriority, ::System::UInt32 groupID, ::System::Boolean isBackStage, ::Class_3_19291F68B291BF8F* builderComp, ::Class_3_F66EF797857EB737* memberComp)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::EDynamicUnloadPriority, ::System::UInt32, ::System::Boolean, ::Class_3_19291F68B291BF8F*, ::Class_3_F66EF797857EB737*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_UPSERTFROMPOLLING_OFFSET))(this, handle, dynamicUnloadPriority, groupID, isBackStage, builderComp, memberComp);
		}

		::System::Void EndPollingSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_ENDPOLLINGSYNC_OFFSET))(this);
		}

		::System::Void Unregister(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_UNREGISTER_OFFSET))(this, handle);
		}

		::System::Boolean Contains(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_CONTAINS_OFFSET))(this, handle);
		}

		::System::Void SetBackStage(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Boolean isBackStage)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_SETBACKSTAGE_OFFSET))(this, handle, isBackStage);
		}

		::System::Int32 GetFrontStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GETFRONTSTAGECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>* GetBackStageEntries()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GETBACKSTAGEENTRIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>* GetBackStageEntriesForRestore(::UnityEngine::Vector3 playerPosition, ::System::Int32 maxCount, ::System::Collections::Generic::ISet_1<::Foundation::ViewObject::ViewObjectHandle>* whitelistHandles, ::System::Single minBackStageDuration, ::System::Single currentTime)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::ISet_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GETBACKSTAGEENTRIESFORRESTORE_OFFSET))(this, playerPosition, maxCount, whitelistHandles, minBackStageDuration, currentTime);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>* GetCullCandidates(::NPCCrowd::EDynamicUnloadPriority requestPriority, ::UnityEngine::Vector3 playerPosition, ::System::Single minCullDistance)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>*(*)(::PVOID, ::NPCCrowd::EDynamicUnloadPriority, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GETCULLCANDIDATES_OFFSET))(this, requestPriority, playerPosition, minCullDistance);
		}

		::System::Boolean TryGetMostCullable(::UnityEngine::Vector3 playerPosition, ::NPCCrowd::NPCRegistryEntry& result, ::System::Single minCullDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::NPCCrowd::NPCRegistryEntry&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_TRYGETMOSTCULLABLE_OFFSET))(this, playerPosition, result, minCullDistance);
		}

		::System::Void GetDebugStats(::System::Int32& protectedFront, ::System::Int32& protectedBack, ::System::Int32& delayableFront, ::System::Int32& delayableBack, ::System::Int32& cullableFront, ::System::Int32& cullableBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GETDEBUGSTATS_OFFSET))(this, protectedFront, protectedBack, delayableFront, delayableBack, cullableFront, cullableBack);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_CLEAR_OFFSET))(this);
		}

		static ::System::Single GetFrontStageLifetime(::NPCCrowd::NPCRegistryEntry entry)
		{
			return ((::System::Single(*)(::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GETFRONTSTAGELIFETIME_OFFSET))(entry);
		}

		static ::System::Int32 CompareRestoreOrder(::NPCCrowd::NPCRegistryEntry a, ::NPCCrowd::NPCRegistryEntry b, ::UnityEngine::Vector3 playerPosition)
		{
			return ((::System::Int32(*)(::NPCCrowd::NPCRegistryEntry, ::NPCCrowd::NPCRegistryEntry, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_COMPARERESTOREORDER_OFFSET))(a, b, playerPosition);
		}

		::System::Boolean TryGetMostDistantFromBucket(::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* bucket, ::UnityEngine::Vector3 playerPosition, ::System::Single minCullDistanceSq, ::NPCCrowd::NPCRegistryEntry& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>*, ::UnityEngine::Vector3, ::System::Single, ::NPCCrowd::NPCRegistryEntry&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_TRYGETMOSTDISTANTFROMBUCKET_OFFSET))(this, bucket, playerPosition, minCullDistanceSq, result);
		}

		::System::Boolean TryGetFrontEntry(::Foundation::ViewObject::ViewObjectHandle handle, ::NPCCrowd::NPCRegistryEntry& entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::NPCRegistryEntry&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_TRYGETFRONTENTRY_OFFSET))(this, handle, entry);
		}

		::System::Void AddFrontPriorityHandle(::Foundation::ViewObject::ViewObjectHandle handle, ::NPCCrowd::EDynamicUnloadPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::EDynamicUnloadPriority))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_ADDFRONTPRIORITYHANDLE_OFFSET))(this, handle, priority);
		}

		::System::Void RemoveFrontPriorityHandle(::Foundation::ViewObject::ViewObjectHandle handle, ::NPCCrowd::EDynamicUnloadPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::EDynamicUnloadPriority))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_REMOVEFRONTPRIORITYHANDLE_OFFSET))(this, handle, priority);
		}

		static ::System::Single GetDistanceSqCached(::NPCCrowd::NPCRegistryEntry entry, ::UnityEngine::Vector3 playerPosition)
		{
			return ((::System::Single(*)(::NPCCrowd::NPCRegistryEntry, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_GETDISTANCESQCACHED_OFFSET))(entry, playerPosition);
		}

		::System::Boolean ShouldBlockRestoreByNearDistance(::NPCCrowd::NPCRegistryEntry entry, ::UnityEngine::Vector3 playerPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY_SHOULDBLOCKRESTOREBYNEARDISTANCE_OFFSET))(this, entry, playerPosition);
		}
	};
}
