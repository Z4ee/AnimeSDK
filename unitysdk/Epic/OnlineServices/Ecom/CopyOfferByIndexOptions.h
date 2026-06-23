#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C4BB540)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_GET_OFFERINDEX_OFFSET UNITYSDK_OFFSET(0x1C4BB560)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C4BB550)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_SET_OFFERINDEX_OFFSET UNITYSDK_OFFSET(0x1C4BB570)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BB580)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferByIndexOptions_TypeDefinitionIndex = 35942;

	class CopyOfferByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::UInt32 _OfferIndex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_OfferIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_GET_OFFERINDEX_OFFSET))(this);
		}

		::System::Void set_OfferIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERBYINDEXOPTIONS_SET_OFFERINDEX_OFFSET))(this, value);
		}
	};
}
