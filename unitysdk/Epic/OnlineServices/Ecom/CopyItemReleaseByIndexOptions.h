#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1AD825D0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1AD825B0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_GET_RELEASEINDEX_OFFSET UNITYSDK_OFFSET(0x1AD825F0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1AD825E0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1AD825C0)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_SET_RELEASEINDEX_OFFSET UNITYSDK_OFFSET(0x1AD82600)
#define EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD82610)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CopyItemReleaseByIndexOptions_TypeDefinitionIndex = 34375;

	class CopyItemReleaseByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _ItemId_k__BackingField; // 0x18
		::System::UInt32 _ReleaseIndex_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_ReleaseIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_GET_RELEASEINDEX_OFFSET))(this);
		}

		::System::Void set_ReleaseIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_COPYITEMRELEASEBYINDEXOPTIONS_SET_RELEASEINDEX_OFFSET))(this, value);
		}
	};
}
