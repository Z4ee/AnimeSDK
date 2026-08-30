#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class QueryStatsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD60)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1CCE0)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1CA60)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C910)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1CCD0)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C9D0)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STATNAMES_OFFSET UNITYSDK_OFFSET(0x1CAF0)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1CC10)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int QueryStatsOptionsInternal_TypeDefinitionIndex = 45068;

	struct alignas(8) QueryStatsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::Int64 m_StartTime; // 0x20
		::System::Int64 m_EndTime; // 0x28
		::System::IntPtr m_StatNames; // 0x30
		::System::UInt32 m_StatNamesCount; // 0x38
		::System::IntPtr m_TargetUserId; // 0x40

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STARTTIME_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_ENDTIME_OFFSET))(this, a1);
		}
		*/

		::System::Void set_StatNames(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_STATNAMES_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::QueryStatsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::QueryStatsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
