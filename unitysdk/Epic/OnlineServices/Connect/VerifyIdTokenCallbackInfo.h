#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/VerifyIdTokenCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF25760)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1DF256E0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1DF25700)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF25680)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1DF25740)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_ISACCOUNTINFOPRESENT_OFFSET UNITYSDK_OFFSET(0x1DF256C0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1DF25720)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1DF256A0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF25660)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF26310)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1DF256F0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1DF25710)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF25690)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1DF25750)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_ISACCOUNTINFOPRESENT_OFFSET UNITYSDK_OFFSET(0x1DF256D0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF25780)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1DF25730)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1DF256B0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF25670)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF26450)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int VerifyIdTokenCallbackInfo_TypeDefinitionIndex = 46194;

	class VerifyIdTokenCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ProductUserId_k__BackingField; // 0x18
		::System::String* _AccountId_k__BackingField; // 0x20
		::System::String* _Platform_k__BackingField; // 0x28
		::System::String* _DeviceType_k__BackingField; // 0x30
		::System::Boolean _IsAccountInfoPresent_k__BackingField; // 0x38
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_k__BackingField; // 0x3C
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_PRODUCTUSERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAccountInfoPresent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_ISACCOUNTINFOPRESENT_OFFSET))(this);
		}

		::System::Void set_IsAccountInfoPresent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_ISACCOUNTINFOPRESENT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_ACCOUNTIDTYPE_OFFSET))(this, a1);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_PLATFORM_OFFSET))(this, a1);
		}

		::System::String* get_DeviceType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GET_DEVICETYPE_OFFSET))(this);
		}

		::System::Void set_DeviceType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_DEVICETYPE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
