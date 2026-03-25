#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8647EF0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8647ED0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8647F00)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8647EE0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8647F10)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetEntitlementsByNameCountOptions_TypeDefinitionIndex = 36348;

	class GetEntitlementsByNameCountOptions : public ::System::Object
	{
	public:
		::System::String* _EntitlementName_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSBYNAMECOUNTOPTIONS_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}
	};
}
