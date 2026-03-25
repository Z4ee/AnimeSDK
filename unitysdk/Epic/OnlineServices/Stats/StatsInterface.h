#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Stats { class CopyStatByIndexOptions; }
namespace Epic::OnlineServices::Stats { class CopyStatByNameOptions; }
namespace Epic::OnlineServices::Stats { class GetStatCountOptions; }
namespace Epic::OnlineServices::Stats { class IngestStatOptions; }
namespace Epic::OnlineServices::Stats { class OnIngestStatCompleteCallback; }
namespace Epic::OnlineServices::Stats { class OnQueryStatsCompleteCallback; }
namespace Epic::OnlineServices::Stats { class QueryStatsOptions; }
namespace Epic::OnlineServices::Stats { class Stat; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYINDEX_OFFSET UNITYSDK_OFFSET(0x83BEDA0)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYNAME_OFFSET UNITYSDK_OFFSET(0x83BF050)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_GETSTATSCOUNT_OFFSET UNITYSDK_OFFSET(0x83BF250)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_INGESTSTAT_OFFSET UNITYSDK_OFFSET(0x83BF450)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONINGESTSTATCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83BEC60)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONQUERYSTATSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83BECF0)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_QUERYSTATS_OFFSET UNITYSDK_OFFSET(0x83BF610)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83BED90)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x83BED80)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int StatsInterface_TypeDefinitionIndex = 35399;

	class StatsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopystatbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopystatbynameApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetstatcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetstatscountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 IngestdataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 IngeststatApiLatest = 0x3; // 0x0
		// static const ::System::Int32 MaxIngestStats = 0xBB8; // 0x0
		// static const ::System::Int32 MaxQueryStats = 0x3E8; // 0x0
		// static const ::System::Int32 QuerystatsApiLatest = 0x3; // 0x0
		// static const ::System::Int32 StatApiLatest = 0x1; // 0x0
		// static const ::System::Int32 TimeUndefined = 0xFFFFFFFF; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyStatByIndex(::Epic::OnlineServices::Stats::CopyStatByIndexOptions* options, ::Epic::OnlineServices::Stats::Stat*& outStat)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Stats::CopyStatByIndexOptions*, ::Epic::OnlineServices::Stats::Stat*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYINDEX_OFFSET))(this, options, outStat);
		}

		::Epic::OnlineServices::Result CopyStatByName(::Epic::OnlineServices::Stats::CopyStatByNameOptions* options, ::Epic::OnlineServices::Stats::Stat*& outStat)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Stats::CopyStatByNameOptions*, ::Epic::OnlineServices::Stats::Stat*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYNAME_OFFSET))(this, options, outStat);
		}

		::System::UInt32 GetStatsCount(::Epic::OnlineServices::Stats::GetStatCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Stats::GetStatCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_GETSTATSCOUNT_OFFSET))(this, options);
		}

		::System::Void IngestStat(::Epic::OnlineServices::Stats::IngestStatOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatOptions*, ::System::Object*, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_INGESTSTAT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryStats(::Epic::OnlineServices::Stats::QueryStatsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::QueryStatsOptions*, ::System::Object*, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_QUERYSTATS_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnIngestStatCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONINGESTSTATCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryStatsCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONQUERYSTATSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
