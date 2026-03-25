#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86483F0)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8648400)
#define EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8648410)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetEntitlementsCountOptions_TypeDefinitionIndex = 36350;

	class GetEntitlementsCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETENTITLEMENTSCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
