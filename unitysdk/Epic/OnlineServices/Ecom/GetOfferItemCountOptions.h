#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BEFE9F0)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0x1BEFEA10)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BEFEA00)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x1BEFEA20)
#define EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFEA30)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetOfferItemCountOptions_TypeDefinitionIndex = 35968;

	class GetOfferItemCountOptions : public ::System::Object
	{
	public:
		::System::String* _OfferId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETOFFERITEMCOUNTOPTIONS_SET_OFFERID_OFFSET))(this, value);
		}
	};
}
