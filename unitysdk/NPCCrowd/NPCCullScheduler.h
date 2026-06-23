#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/NPCCrowd/NPCCullScheduler_SoftPoolEntry.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B7F8387EB62637EC;
class Class_3_C2AE23344FDC0942;
class Class_3_F66EF797857EB737;
namespace NPCCrowd { class INPCAssociatedMemberResolver; }
namespace NPCCrowd { class NPCAreaScoreTracker; }
namespace NPCCrowd { class NPCCullEventLogger; }
namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace NPCCrowd { class NPCQuotaManager; }
namespace NPCCrowd { class NPCRegistry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCULLSCHEDULER_DOBACKSTAGE_OFFSET UNITYSDK_OFFSET(0x10710200)
#define NPCCROWD_NPCCULLSCHEDULER_DOFRONTSTAGE_OFFSET UNITYSDK_OFFSET(0x107124A0)
#define NPCCROWD_NPCCULLSCHEDULER_FORCEACTIVECULLUNTILWITHINLIMIT_OFFSET UNITYSDK_OFFSET(0x10711B30)
#define NPCCROWD_NPCCULLSCHEDULER_GETAREASCOREREALTIME_OFFSET UNITYSDK_OFFSET(0x1070F930)
#define NPCCROWD_NPCCULLSCHEDULER_GETDISTTOPLAYER_OFFSET UNITYSDK_OFFSET(0x107107C0)
#define NPCCROWD_NPCCULLSCHEDULER_GETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1070FEA0)
#define NPCCROWD_NPCCULLSCHEDULER_ISGROUPCULLALLOWED_OFFSET UNITYSDK_OFFSET(0x10712FF0)
#define NPCCROWD_NPCCULLSCHEDULER_ISNEARPLAYER_OFFSET UNITYSDK_OFFSET(0x10713400)
#define NPCCROWD_NPCCULLSCHEDULER_ISRESTOREALLOWEDBYHYSTERESIS_OFFSET UNITYSDK_OFFSET(0x107120D0)
#define NPCCROWD_NPCCULLSCHEDULER_ISSCOREOVERLIMIT_OFFSET UNITYSDK_OFFSET(0x1070F890)
#define NPCCROWD_NPCCULLSCHEDULER_ISSOFTCULLENABLED_OFFSET UNITYSDK_OFFSET(0x10710990)
#define NPCCROWD_NPCCULLSCHEDULER_LOGCULL_OFFSET UNITYSDK_OFFSET(0x10710670)
#define NPCCROWD_NPCCULLSCHEDULER_LOGRESTORE_OFFSET UNITYSDK_OFFSET(0x10712350)
#define NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_1_OFFSET UNITYSDK_OFFSET(0x10712C20)
#define NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_OFFSET UNITYSDK_OFFSET(0x10712A80)
#define NPCCROWD_NPCCULLSCHEDULER_PRUNESOFTPOOLSTALEENTRIES_OFFSET UNITYSDK_OFFSET(0x107109F0)
#define NPCCROWD_NPCCULLSCHEDULER_SETAREASCORETRACKER_OFFSET UNITYSDK_OFFSET(0x1070F7A0)
#define NPCCROWD_NPCCULLSCHEDULER_SETCULLEVENTLOGGER_OFFSET UNITYSDK_OFFSET(0x1070F840)
#define NPCCROWD_NPCCULLSCHEDULER_SETRESOLVER_OFFSET UNITYSDK_OFFSET(0x1070F7F0)
#define NPCCROWD_NPCCULLSCHEDULER_TRYACTIVECULL_OFFSET UNITYSDK_OFFSET(0x10710E10)
#define NPCCROWD_NPCCULLSCHEDULER_TRYFORCECULLONE_OFFSET UNITYSDK_OFFSET(0x10712DC0)
#define NPCCROWD_NPCCULLSCHEDULER_TRYPICKGROUPCULLABLECANDIDATE_OFFSET UNITYSDK_OFFSET(0x1070FF30)
#define NPCCROWD_NPCCULLSCHEDULER_TRYPREEMPT_OFFSET UNITYSDK_OFFSET(0x1070FA30)
#define NPCCROWD_NPCCULLSCHEDULER_TRYRESTORESOFTPOOLED_OFFSET UNITYSDK_OFFSET(0x10712180)
#define NPCCROWD_NPCCULLSCHEDULER_TRYRESTORE_OFFSET UNITYSDK_OFFSET(0x10711250)
#define NPCCROWD_NPCCULLSCHEDULER_TRYSOFTCULLTOPOOL_OFFSET UNITYSDK_OFFSET(0x10712780)
#define NPCCROWD_NPCCULLSCHEDULER_UPDATE_OFFSET UNITYSDK_OFFSET(0x107108A0)
#define NPCCROWD_NPCCULLSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1070F5A0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCullScheduler_TypeDefinitionIndex = 44489;

	class NPCCullScheduler : public ::System::Object
	{
	public:
		// static const ::System::Int32 SoftPoolPruneIntervalFrames = 0x12C; // 0x0
		::NPCCrowd::INPCAssociatedMemberResolver* _resolver; // 0x10
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _softPoolPruneBuffer; // 0x18
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _associatedBuffer; // 0x20
		::NPCCrowd::NPCAreaScoreTracker* _areaScoreTracker; // 0x28
		::NPCCrowd::NPCQuotaManager* _quotaManager; // 0x30
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x38
		::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* _performanceBackStagedHandles; // 0x40
		::NPCCrowd::NPCRegistry* _registry; // 0x48
		::System::Collections::Generic::Dictionary_2<::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::NPCCullScheduler_SoftPoolEntry>* _softPoolBackStagedHandles; // 0x50
		::NPCCrowd::NPCCullEventLogger* _cullEventLogger; // 0x58
		::System::Int32 _softPoolPruneFrameCounter; // 0x60
		::System::Single _lastRestoreTime; // 0x64
		::System::Single _lastCullTime; // 0x68

		::System::Void _ctor(::NPCCrowd::NPCPerformanceConfigSO* config, ::NPCCrowd::NPCRegistry* registry, ::NPCCrowd::NPCQuotaManager* quotaManager, ::NPCCrowd::NPCAreaScoreTracker* areaScoreTracker)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceConfigSO*, ::NPCCrowd::NPCRegistry*, ::NPCCrowd::NPCQuotaManager*, ::NPCCrowd::NPCAreaScoreTracker*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER__CTOR_OFFSET))(this, config, registry, quotaManager, areaScoreTracker);
		}

		::System::Void SetAreaScoreTracker(::NPCCrowd::NPCAreaScoreTracker* tracker)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCAreaScoreTracker*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_SETAREASCORETRACKER_OFFSET))(this, tracker);
		}

		::System::Void SetResolver(::NPCCrowd::INPCAssociatedMemberResolver* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::INPCAssociatedMemberResolver*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_SETRESOLVER_OFFSET))(this, resolver);
		}

		::System::Void SetCullEventLogger(::NPCCrowd::NPCCullEventLogger* logger)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCullEventLogger*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_SETCULLEVENTLOGGER_OFFSET))(this, logger);
		}

		::System::Boolean IsScoreOverLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_ISSCOREOVERLIMIT_OFFSET))(this);
		}

		::System::Boolean TryPreempt(::NPCCrowd::EDynamicUnloadPriority requestPriority)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::EDynamicUnloadPriority))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYPREEMPT_OFFSET))(this, requestPriority);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Int32 ForceActiveCullUntilWithinLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_FORCEACTIVECULLUNTILWITHINLIMIT_OFFSET))(this);
		}

		::System::Void TryActiveCull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYACTIVECULL_OFFSET))(this);
		}

		::System::Void TryRestore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYRESTORE_OFFSET))(this);
		}

		::System::Boolean IsRestoreAllowedByHysteresis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_ISRESTOREALLOWEDBYHYSTERESIS_OFFSET))(this);
		}

		::System::Single GetAreaScoreRealtime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_GETAREASCOREREALTIME_OFFSET))(this);
		}

		::System::Void DoBackStage(::NPCCrowd::NPCRegistryEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_DOBACKSTAGE_OFFSET))(this, entry);
		}

		static ::System::Void MarkPerformanceCull(::Class_3_B7F8387EB62637EC* builderComp)
		{
			return ((::System::Void(*)(::Class_3_B7F8387EB62637EC*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_OFFSET))(builderComp);
		}

		static ::System::Void MarkPerformanceCull_1(::Class_3_C2AE23344FDC0942* monsterProxy)
		{
			return ((::System::Void(*)(::Class_3_C2AE23344FDC0942*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_1_OFFSET))(monsterProxy);
		}

		::System::Void DoFrontStage(::NPCCrowd::NPCRegistryEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_DOFRONTSTAGE_OFFSET))(this, entry);
		}

		::System::Boolean TryRestoreSoftPooled(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYRESTORESOFTPOOLED_OFFSET))(this, handle);
		}

		::System::Boolean TrySoftCullToPool(::Foundation::ViewObject::ViewObjectHandle handle, ::Class_3_B7F8387EB62637EC* cachedBuilderComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_3_B7F8387EB62637EC*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYSOFTCULLTOPOOL_OFFSET))(this, handle, cachedBuilderComp);
		}

		::System::Boolean IsSoftCullEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_ISSOFTCULLENABLED_OFFSET))(this);
		}

		::System::Void PruneSoftPoolStaleEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_PRUNESOFTPOOLSTALEENTRIES_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetPlayerPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_GETPLAYERPOSITION_OFFSET))();
		}

		static ::System::Single GetDistToPlayer(::NPCCrowd::NPCRegistryEntry entry, ::UnityEngine::Vector3 playerPos)
		{
			return ((::System::Single(*)(::NPCCrowd::NPCRegistryEntry, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_GETDISTTOPLAYER_OFFSET))(entry, playerPos);
		}

		static ::System::Void LogCull(::NPCCrowd::NPCRegistryEntry entry)
		{
			return ((::System::Void(*)(::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_LOGCULL_OFFSET))(entry);
		}

		static ::System::Void LogRestore(::NPCCrowd::NPCRegistryEntry entry)
		{
			return ((::System::Void(*)(::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_LOGRESTORE_OFFSET))(entry);
		}

		::System::Boolean TryForceCullOne()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYFORCECULLONE_OFFSET))(this);
		}

		::System::Boolean TryPickGroupCullableCandidate(::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>* candidates, ::UnityEngine::Vector3 playerPos, ::NPCCrowd::NPCRegistryEntry& target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::NPCRegistryEntry>*, ::UnityEngine::Vector3, ::NPCCrowd::NPCRegistryEntry&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYPICKGROUPCULLABLECANDIDATE_OFFSET))(this, candidates, playerPos, target);
		}

		::System::Boolean IsGroupCullAllowed(::NPCCrowd::NPCRegistryEntry candidate, ::UnityEngine::Vector3 playerPos, ::System::String*& blockReason)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry, ::UnityEngine::Vector3, ::System::String*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_ISGROUPCULLALLOWED_OFFSET))(this, candidate, playerPos, blockReason);
		}

		::System::Boolean IsNearPlayer(::Class_3_F66EF797857EB737* memberComp, ::UnityEngine::Vector3 playerPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F66EF797857EB737*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_ISNEARPLAYER_OFFSET))(this, memberComp, playerPos);
		}
	};
}
