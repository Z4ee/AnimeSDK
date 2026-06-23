#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1C542170)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C542150)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1C542180)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C542160)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C542190)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int CopyFileMetadataByFilenameOptions_TypeDefinitionIndex = 35411;

	class CopyFileMetadataByFilenameOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _Filename_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_FILENAME_OFFSET))(this, value);
		}
	};
}
