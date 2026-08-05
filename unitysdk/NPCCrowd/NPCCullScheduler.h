#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/NPCCrowd/NPCCullScheduler_SoftPoolEntry.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_19291F68B291BF8F;
class Class_3_851B0A9347B698BD;
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

#define NPCCROWD_NPCCULLSCHEDULER_DOBACKSTAGE_OFFSET UNITYSDK_OFFSET(0xF77D370)
#define NPCCROWD_NPCCULLSCHEDULER_DOFRONTSTAGE_OFFSET UNITYSDK_OFFSET(0xF77F790)
#define NPCCROWD_NPCCULLSCHEDULER_FORCEACTIVECULLUNTILWITHINLIMIT_OFFSET UNITYSDK_OFFSET(0xF77EDC0)
#define NPCCROWD_NPCCULLSCHEDULER_GETAREASCOREREALTIME_OFFSET UNITYSDK_OFFSET(0xF77CA50)
#define NPCCROWD_NPCCULLSCHEDULER_GETDISTTOPLAYER_OFFSET UNITYSDK_OFFSET(0xF77DA80)
#define NPCCROWD_NPCCULLSCHEDULER_GETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xF77CFB0)
#define NPCCROWD_NPCCULLSCHEDULER_ISGROUPCULLALLOWED_OFFSET UNITYSDK_OFFSET(0xF780520)
#define NPCCROWD_NPCCULLSCHEDULER_ISNEARPLAYER_OFFSET UNITYSDK_OFFSET(0xF7809F0)
#define NPCCROWD_NPCCULLSCHEDULER_ISRESTOREALLOWEDBYHYSTERESIS_OFFSET UNITYSDK_OFFSET(0xF77F340)
#define NPCCROWD_NPCCULLSCHEDULER_ISSCOREOVERLIMIT_OFFSET UNITYSDK_OFFSET(0xF77C9B0)
#define NPCCROWD_NPCCULLSCHEDULER_ISSOFTCULLENABLED_OFFSET UNITYSDK_OFFSET(0xF77DC40)
#define NPCCROWD_NPCCULLSCHEDULER_LOGCULL_OFFSET UNITYSDK_OFFSET(0xF77D8B0)
#define NPCCROWD_NPCCULLSCHEDULER_LOGRESTORE_OFFSET UNITYSDK_OFFSET(0xF77F5C0)
#define NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_1_OFFSET UNITYSDK_OFFSET(0xF780100)
#define NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_OFFSET UNITYSDK_OFFSET(0xF77FF10)
#define NPCCROWD_NPCCULLSCHEDULER_PRUNESOFTPOOLSTALEENTRIES_OFFSET UNITYSDK_OFFSET(0xF77DCA0)
#define NPCCROWD_NPCCULLSCHEDULER_SETAREASCORETRACKER_OFFSET UNITYSDK_OFFSET(0xF77C8C0)
#define NPCCROWD_NPCCULLSCHEDULER_SETCULLEVENTLOGGER_OFFSET UNITYSDK_OFFSET(0xF77C960)
#define NPCCROWD_NPCCULLSCHEDULER_SETRESOLVER_OFFSET UNITYSDK_OFFSET(0xF77C910)
#define NPCCROWD_NPCCULLSCHEDULER_TRYACTIVECULL_OFFSET UNITYSDK_OFFSET(0xF77E060)
#define NPCCROWD_NPCCULLSCHEDULER_TRYFORCECULLONE_OFFSET UNITYSDK_OFFSET(0xF7802F0)
#define NPCCROWD_NPCCULLSCHEDULER_TRYPICKGROUPCULLABLECANDIDATE_OFFSET UNITYSDK_OFFSET(0xF77D040)
#define NPCCROWD_NPCCULLSCHEDULER_TRYPREEMPT_OFFSET UNITYSDK_OFFSET(0xF77CB50)
#define NPCCROWD_NPCCULLSCHEDULER_TRYRESTORESOFTPOOLED_OFFSET UNITYSDK_OFFSET(0xF77F3F0)
#define NPCCROWD_NPCCULLSCHEDULER_TRYRESTORE_OFFSET UNITYSDK_OFFSET(0xF77E480)
#define NPCCROWD_NPCCULLSCHEDULER_TRYSOFTCULLTOPOOL_OFFSET UNITYSDK_OFFSET(0xF77FB80)
#define NPCCROWD_NPCCULLSCHEDULER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF77DB50)
#define NPCCROWD_NPCCULLSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0xF77C6C0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCullScheduler_TypeDefinitionIndex = 88980;

	class NPCCullScheduler : public ::System::Object
	{
	public:
		// static const ::System::Int32 SoftPoolPruneIntervalFrames = 0x12C; // 0x0
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _softPoolPruneBuffer; // 0x10
		::System::Collections::Generic::Dictionary_2<::Foundation::ViewObject::ViewObjectHandle, ::NPCCrowd::NPCCullScheduler_SoftPoolEntry>* _softPoolBackStagedHandles; // 0x18
		::NPCCrowd::NPCAreaScoreTracker* _areaScoreTracker; // 0x20
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _associatedBuffer; // 0x28
		::NPCCrowd::NPCCullEventLogger* _cullEventLogger; // 0x30
		::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* _performanceBackStagedHandles; // 0x38
		::NPCCrowd::INPCAssociatedMemberResolver* _resolver; // 0x40
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x48
		::NPCCrowd::NPCRegistry* _registry; // 0x50
		::NPCCrowd::NPCQuotaManager* _quotaManager; // 0x58
		::System::Single _lastRestoreTime; // 0x60
		::System::Single _lastCullTime; // 0x64
		::System::Int32 _softPoolPruneFrameCounter; // 0x68

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

		static ::System::Void MarkPerformanceCull(::Class_3_19291F68B291BF8F* builderComp)
		{
			return ((::System::Void(*)(::Class_3_19291F68B291BF8F*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_OFFSET))(builderComp);
		}

		static ::System::Void MarkPerformanceCull_1(::Class_3_851B0A9347B698BD* monsterProxy)
		{
			return ((::System::Void(*)(::Class_3_851B0A9347B698BD*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_MARKPERFORMANCECULL_1_OFFSET))(monsterProxy);
		}

		::System::Void DoFrontStage(::NPCCrowd::NPCRegistryEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_DOFRONTSTAGE_OFFSET))(this, entry);
		}

		::System::Boolean TryRestoreSoftPooled(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYRESTORESOFTPOOLED_OFFSET))(this, handle);
		}

		::System::Boolean TrySoftCullToPool(::Foundation::ViewObject::ViewObjectHandle handle, ::Class_3_19291F68B291BF8F* cachedBuilderComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_3_19291F68B291BF8F*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLSCHEDULER_TRYSOFTCULLTOPOOL_OFFSET))(this, handle, cachedBuilderComp);
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
