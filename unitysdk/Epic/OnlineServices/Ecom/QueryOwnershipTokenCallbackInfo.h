#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/QueryOwnershipTokenCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x864EF10)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x864EEB0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x864EED0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_OWNERSHIPTOKEN_OFFSET UNITYSDK_OFFSET(0x864EEF0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x864EE90)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x864F420)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x864EEC0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x864EEE0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x864EF30)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OWNERSHIPTOKEN_OFFSET UNITYSDK_OFFSET(0x864EF00)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x864EEA0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x864F550)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipTokenCallbackInfo_TypeDefinitionIndex = 36393;

	class QueryOwnershipTokenCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _OwnershipToken_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_OwnershipToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_OWNERSHIPTOKEN_OFFSET))(this);
		}

		::System::Void set_OwnershipToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OWNERSHIPTOKEN_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
