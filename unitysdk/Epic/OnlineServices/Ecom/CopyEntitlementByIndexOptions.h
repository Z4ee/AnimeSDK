#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_GET_ENTITLEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x8E71840)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E71820)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_SET_ENTITLEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x8E71850)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E71830)
#define EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E71860)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyEntitlementByIndexOptions_TypeDefinitionIndex = 42148;

	class CopyEntitlementByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::UInt32 _EntitlementIndex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntitlementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_GET_ENTITLEMENTINDEX_OFFSET))(this);
		}

		::System::Void set_EntitlementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYENTITLEMENTBYINDEXOPTIONS_SET_ENTITLEMENTINDEX_OFFSET))(this, value);
		}
	};
}
