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

#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYINDEX_OFFSET UNITYSDK_OFFSET(0x1B7DA4E0)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYNAME_OFFSET UNITYSDK_OFFSET(0x1B7DA790)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_GETSTATSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7DA990)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_INGESTSTAT_OFFSET UNITYSDK_OFFSET(0x1B7DAB90)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONINGESTSTATCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1B7DA380)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONQUERYSTATSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1B7DA420)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE_QUERYSTATS_OFFSET UNITYSDK_OFFSET(0x1B7DAD70)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7DA4D0)
#define EPIC_ONLINESERVICES_STATS_STATSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7DA4C0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int StatsInterface_TypeDefinitionIndex = 42889;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyStatByIndex(::Epic::OnlineServices::Stats::CopyStatByIndexOptions* a1, ::Epic::OnlineServices::Stats::Stat*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Stats::CopyStatByIndexOptions*, ::Epic::OnlineServices::Stats::Stat*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyStatByName(::Epic::OnlineServices::Stats::CopyStatByNameOptions* a1, ::Epic::OnlineServices::Stats::Stat*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Stats::CopyStatByNameOptions*, ::Epic::OnlineServices::Stats::Stat*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_COPYSTATBYNAME_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetStatsCount(::Epic::OnlineServices::Stats::GetStatCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Stats::GetStatCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_GETSTATSCOUNT_OFFSET))(this, a1);
		}

		::System::Void IngestStat(::Epic::OnlineServices::Stats::IngestStatOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatOptions*, ::System::Object*, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_INGESTSTAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryStats(::Epic::OnlineServices::Stats::QueryStatsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::QueryStatsOptions*, ::System::Object*, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_QUERYSTATS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnIngestStatCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONINGESTSTATCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryStatsCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATSINTERFACE_ONQUERYSTATSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
