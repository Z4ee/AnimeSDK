#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/QueryOffersCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x864D6D0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x864D690)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x864D6B0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x864D670)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x864DA00)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x864D6A0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x864D6C0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x864D6F0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x864D680)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x864DB10)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOffersCallbackInfo_TypeDefinitionIndex = 36385;

	class QueryOffersCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOffersCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::QueryOffersCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
