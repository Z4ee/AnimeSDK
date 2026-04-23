#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x8E7C670)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E7C650)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x8E7C680)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E7C660)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E7C690)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetItemReleaseCountOptions_TypeDefinitionIndex = 42180;

	class GetItemReleaseCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _ItemId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_ITEMID_OFFSET))(this, value);
		}
	};
}
