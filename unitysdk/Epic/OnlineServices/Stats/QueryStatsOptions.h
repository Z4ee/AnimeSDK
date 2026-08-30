#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D439530)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D4394E0)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1D439500)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_STATNAMES_OFFSET UNITYSDK_OFFSET(0x1D439560)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1D439580)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D439550)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D4394F0)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1D439520)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_STATNAMES_OFFSET UNITYSDK_OFFSET(0x1D439570)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1D439590)
#define EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4395A0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int QueryStatsOptions_TypeDefinitionIndex = 45067;

	class QueryStatsOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _StatNames_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x20
		::System::Nullable_1<::System::DateTimeOffset> _EndTime_k__BackingField; // 0x28
		::System::Nullable_1<::System::DateTimeOffset> _StartTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_ENDTIME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_StatNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_STATNAMES_OFFSET))(this);
		}

		::System::Void set_StatNames(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_STATNAMES_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_QUERYSTATSOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
