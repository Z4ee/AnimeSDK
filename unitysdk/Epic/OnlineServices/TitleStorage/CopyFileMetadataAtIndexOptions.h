#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB15F6B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB15F690)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB15F6C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB15F6A0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB15F6D0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int CopyFileMetadataAtIndexOptions_TypeDefinitionIndex = 45006;

	class CopyFileMetadataAtIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_INDEX_OFFSET))(this, a1);
		}
	};
}
