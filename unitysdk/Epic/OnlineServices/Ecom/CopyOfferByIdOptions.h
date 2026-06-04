#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B67A0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0xA2B67C0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B67B0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0xA2B67D0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B67E0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferByIdOptions_TypeDefinitionIndex = 42961;

	class CopyOfferByIdOptions : public ::System::Object
	{
	public:
		::System::String* _OfferId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYIDOPTIONS_SET_OFFERID_OFFSET))(this, a1);
		}
	};
}
