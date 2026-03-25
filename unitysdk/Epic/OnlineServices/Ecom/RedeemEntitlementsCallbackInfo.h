#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/RedeemEntitlementsCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x864FC80)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x864FC40)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x864FC60)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x864FC20)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x864FFB0)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x864FC50)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x864FC70)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x864FCA0)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x864FC30)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86500C0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int RedeemEntitlementsCallbackInfo_TypeDefinitionIndex = 36397;

	class RedeemEntitlementsCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
