#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Stats/OnQueryStatsCompleteCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF60CE0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF60C80)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF60CA0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF60C60)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF60CC0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF60F70)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF60C90)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF60CB0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF60D00)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF60C70)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF60CD0)
#define EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF610B0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int OnQueryStatsCompleteCallbackInfo_TypeDefinitionIndex = 35660;

	class OnQueryStatsCompleteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_ONQUERYSTATSCOMPLETECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
