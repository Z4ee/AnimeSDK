#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sanctions/QueryActivePlayerSanctionsCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA3562F0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA356290)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA3562D0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA356270)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA3562B0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA356840)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA3562A0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA3562E0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA356310)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA356280)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA3562C0)
#define EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA356970)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int QueryActivePlayerSanctionsCallbackInfo_TypeDefinitionIndex = 42207;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_QUERYACTIVEPLAYERSANCTIONSCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
