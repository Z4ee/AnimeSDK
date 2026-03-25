#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_GET_ENTITLEMENTIDS_OFFSET UNITYSDK_OFFSET(0x8650110)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86500F0)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_SET_ENTITLEMENTIDS_OFFSET UNITYSDK_OFFSET(0x8650120)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8650100)
#define EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8650130)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int RedeemEntitlementsOptions_TypeDefinitionIndex = 36399;

	class RedeemEntitlementsOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _EntitlementIds_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_EntitlementIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_GET_ENTITLEMENTIDS_OFFSET))(this);
		}

		::System::Void set_EntitlementIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_REDEEMENTITLEMENTSOPTIONS_SET_ENTITLEMENTIDS_OFFSET))(this, value);
		}
	};
}
