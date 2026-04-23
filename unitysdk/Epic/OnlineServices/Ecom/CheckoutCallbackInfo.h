#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CheckoutCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E6FC60)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8E6FC00)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E6FC20)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E6FBE0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x8E6FC40)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8E70240)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8E6FC10)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E6FC30)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8E6FC80)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E6FBF0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x8E6FC50)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8E70370)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutCallbackInfo_TypeDefinitionIndex = 42140;

	class CheckoutCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _TransactionId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_TransactionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_TRANSACTIONID_OFFSET))(this);
		}

		::System::Void set_TransactionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_TRANSACTIONID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
