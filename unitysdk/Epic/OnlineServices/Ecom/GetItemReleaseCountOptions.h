#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1BAA36E0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAA36C0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1BAA36F0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAA36D0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA3700)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetItemReleaseCountOptions_TypeDefinitionIndex = 43844;

	class GetItemReleaseCountOptions : public ::System::Object
	{
	public:
		::System::String* _ItemId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMRELEASECOUNTOPTIONS_SET_ITEMID_OFFSET))(this, a1);
		}
	};
}
