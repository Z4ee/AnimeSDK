#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/FileMetadataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0xB160950)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0xB160910)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_MD5HASH_OFFSET UNITYSDK_OFFSET(0xB160930)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0xB160970)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_1_OFFSET UNITYSDK_OFFSET(0xB160DE0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xB160960)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0xB160920)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_MD5HASH_OFFSET UNITYSDK_OFFSET(0xB160940)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_OFFSET UNITYSDK_OFFSET(0xB160990)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0xB160980)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB160F10)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int FileMetadata_TypeDefinitionIndex = 45014;

	class FileMetadata : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::System::String* _MD5Hash_k__BackingField; // 0x18
		::System::UInt32 _FileSizeBytes_k__BackingField; // 0x20
		::System::UInt32 _UnencryptedDataSizeBytes_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FileSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_FILESIZEBYTES_OFFSET))(this);
		}

		::System::Void set_FileSizeBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_FILESIZEBYTES_OFFSET))(this, a1);
		}

		::System::String* get_MD5Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_MD5HASH_OFFSET))(this);
		}

		::System::Void set_MD5Hash(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_MD5HASH_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnencryptedDataSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this);
		}

		::System::Void set_UnencryptedDataSizeBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadataInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATA_SET_1_OFFSET))(this, a1);
		}
	};
}
