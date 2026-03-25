#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class QueryStatsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C790)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1C720)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1C4A0)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C350)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1C710)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C410)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STATNAMES_OFFSET UNITYSDK_OFFSET(0x1C530)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C650)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int QueryStatsOptionsInternal_TypeDefinitionIndex = 35396;

	struct alignas(8) QueryStatsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::Int64 m_StartTime; // 0x20
		::System::Int64 m_EndTime; // 0x28
		::System::IntPtr m_StatNames; // 0x30
		::System::UInt32 m_StatNamesCount; // 0x38
		::System::IntPtr m_TargetUserId; // 0x40

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STARTTIME_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_ENDTIME_OFFSET))(this, value);
		}
		*/

		::System::Void set_StatNames(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STATNAMES_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::QueryStatsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::QueryStatsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
