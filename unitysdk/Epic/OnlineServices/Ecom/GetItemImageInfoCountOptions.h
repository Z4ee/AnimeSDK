#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x86487B0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8648790)
#define EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x86487C0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86487A0)
#define EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86487D0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int GetItemImageInfoCountOptions_TypeDefinitionIndex = 36352;

	class GetItemImageInfoCountOptions : public ::System::Object
	{
	public:
		::System::String* _ItemId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_GETITEMIMAGEINFOCOUNTOPTIONS_SET_ITEMID_OFFSET))(this, value);
		}
	};
}
