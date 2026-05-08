#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_GET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x194182E0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x194182C0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_SET_ENTITLEMENTID_OFFSET UNITYSDK_OFFSET(0x194182F0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x194182D0)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19418300)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByIdOptions_TypeDefinitionIndex = 34365;

	class CopyEntitlementByIdOptions : public ::System::Object
	{
	public:
		::System::String* _EntitlementId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_EntitlementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_GET_ENTITLEMENTID_OFFSET))(this);
		}

		::System::Void set_EntitlementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYIDOPTIONS_SET_ENTITLEMENTID_OFFSET))(this, value);
		}
	};
}
