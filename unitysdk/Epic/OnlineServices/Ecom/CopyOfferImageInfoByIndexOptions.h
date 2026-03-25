#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_GET_IMAGEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x86400F0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86400B0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0x86400D0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_SET_IMAGEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x8640100)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86400C0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x86400E0)
#define EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8640110)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyOfferImageInfoByIndexOptions_TypeDefinitionIndex = 36336;

	class CopyOfferImageInfoByIndexOptions : public ::System::Object
	{
	public:
		::System::String* _OfferId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::System::UInt32 _ImageInfoIndex_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_SET_OFFERID_OFFSET))(this, value);
		}

		::System::UInt32 get_ImageInfoIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_GET_IMAGEINFOINDEX_OFFSET))(this);
		}

		::System::Void set_ImageInfoIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYOFFERIMAGEINFOBYINDEXOPTIONS_SET_IMAGEINFOINDEX_OFFSET))(this, value);
		}
	};
}
