#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/QueryOwnershipTokenCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2C3750)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2C36F0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C3710)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_OWNERSHIPTOKEN_OFFSET UNITYSDK_OFFSET(0xA2C3730)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2C36D0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2C3C60)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2C3700)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C3720)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2C3770)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OWNERSHIPTOKEN_OFFSET UNITYSDK_OFFSET(0xA2C3740)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2C36E0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C3D90)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipTokenCallbackInfo_TypeDefinitionIndex = 43022;

	class QueryOwnershipTokenCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _OwnershipToken_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_OwnershipToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GET_OWNERSHIPTOKEN_OFFSET))(this);
		}

		::System::Void set_OwnershipToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OWNERSHIPTOKEN_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
