#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CheckoutCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF30A30)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF309D0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF309F0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF309B0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x1DF30A10)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF31010)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF309E0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF30A00)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF30A50)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF309C0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x1DF30A20)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF31140)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutCallbackInfo_TypeDefinitionIndex = 45986;

	class CheckoutCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _TransactionId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_TransactionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GET_TRANSACTIONID_OFFSET))(this);
		}

		::System::Void set_TransactionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_TRANSACTIONID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
