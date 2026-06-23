#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sanctions/QueryActivePlayerSanctionsCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C827D30)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C827CD0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C827D10)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C827CB0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C827CF0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C827FC0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C827CE0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C827D20)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C827D50)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C827CC0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C827D00)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C828100)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int QueryActivePlayerSanctionsCallbackInfo_TypeDefinitionIndex = 35186;

	class QueryActivePlayerSanctionsCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
