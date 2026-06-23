#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_GET_ENTITLEMENTNAMES_OFFSET UNITYSDK_OFFSET(0x1C4BD330)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_GET_INCLUDEREDEEMED_OFFSET UNITYSDK_OFFSET(0x1C4BD350)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C4BD310)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_SET_ENTITLEMENTNAMES_OFFSET UNITYSDK_OFFSET(0x1C4BD340)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_SET_INCLUDEREDEEMED_OFFSET UNITYSDK_OFFSET(0x1C4BD360)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C4BD320)
#define EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BD370)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryEntitlementsOptions_TypeDefinitionIndex = 35991;

	class QueryEntitlementsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _EntitlementNames_k__BackingField; // 0x18
		::System::Boolean _IncludeRedeemed_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_EntitlementNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_GET_ENTITLEMENTNAMES_OFFSET))(this);
		}

		::System::Void set_EntitlementNames(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_SET_ENTITLEMENTNAMES_OFFSET))(this, value);
		}

		::System::Boolean get_IncludeRedeemed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_GET_INCLUDEREDEEMED_OFFSET))(this);
		}

		::System::Void set_IncludeRedeemed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYENTITLEMENTSOPTIONS_SET_INCLUDEREDEEMED_OFFSET))(this, value);
		}
	};
}
