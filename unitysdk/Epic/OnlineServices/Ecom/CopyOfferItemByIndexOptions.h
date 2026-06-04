#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA2B7670)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B7630)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0xA2B7650)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA2B7680)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B7640)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0xA2B7660)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B7690)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferItemByIndexOptions_TypeDefinitionIndex = 42967;

	class CopyOfferItemByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _OfferId_k__BackingField; // 0x18
		::System::UInt32 _ItemIndex_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_OFFERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_ITEMINDEX_OFFSET))(this, a1);
		}
	};
}
