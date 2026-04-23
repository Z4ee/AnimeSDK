#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x8BE7800)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8BE77E0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x8BE7810)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8BE77F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE7820)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int CopyFileMetadataAtIndexOptions_TypeDefinitionIndex = 41160;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_SET_INDEX_OFFSET))(this, value);
		}
	};
}
