#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0xB3C1D50)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3C1D30)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xB3C1D60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3C1D40)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C1D70)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int CopyFileMetadataByFilenameOptions_TypeDefinitionIndex = 45475;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_SET_FILENAME_OFFSET))(this, a1);
		}
	};
}
