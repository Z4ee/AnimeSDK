#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1E51E090)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E51E050)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0x1E51E070)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1E51E0A0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E51E060)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x1E51E080)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E51E0B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferItemByIndexOptions_TypeDefinitionIndex = 36605;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_OFFERID_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERITEMBYINDEXOPTIONS_SET_ITEMINDEX_OFFSET))(this, value);
		}
	};
}
