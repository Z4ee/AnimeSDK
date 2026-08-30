#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D43BB60)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D43BB40)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D43BB70)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D43BB50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D43BB80)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int CopyFileMetadataByFilenameOptions_TypeDefinitionIndex = 45008;

	class CopyFileMetadataByFilenameOptions : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_FILENAME_OFFSET))(this, a1);
		}
	};
}
