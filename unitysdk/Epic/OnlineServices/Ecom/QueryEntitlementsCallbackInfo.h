#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/QueryEntitlementsCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E80500)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8E804C0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E804E0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E804A0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8E80830)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8E804D0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E804F0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8E80520)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E804B0)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8E80940)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryEntitlementsCallbackInfo_TypeDefinitionIndex = 42207;

	class QueryEntitlementsCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
