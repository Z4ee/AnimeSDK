#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/FileMetadataInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1CC41910)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC418D0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_LASTMODIFIEDTIME_OFFSET UNITYSDK_OFFSET(0x1CC41930)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_MD5HASH_OFFSET UNITYSDK_OFFSET(0x1CC418F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC41960)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_1_OFFSET UNITYSDK_OFFSET(0x1CC41D50)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1CC41920)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC418E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_LASTMODIFIEDTIME_OFFSET UNITYSDK_OFFSET(0x1CC41950)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_MD5HASH_OFFSET UNITYSDK_OFFSET(0x1CC41900)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_OFFSET UNITYSDK_OFFSET(0x1CC41980)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC41970)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC41E90)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int FileMetadata_TypeDefinitionIndex = 36084;

	class FileMetadata : public ::System::Object
	{
	public:
		::System::String* _MD5Hash_k__BackingField; // 0x10
		::System::String* _Filename_k__BackingField; // 0x18
		::System::Nullable_1<::System::DateTimeOffset> _LastModifiedTime_k__BackingField; // 0x20
		::System::UInt32 _UnencryptedDataSizeBytes_k__BackingField; // 0x38
		::System::UInt32 _FileSizeBytes_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FileSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILESIZEBYTES_OFFSET))(this);
		}

		::System::Void set_FileSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILESIZEBYTES_OFFSET))(this, value);
		}

		::System::String* get_MD5Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_MD5HASH_OFFSET))(this);
		}

		::System::Void set_MD5Hash(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_MD5HASH_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_LastModifiedTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_LASTMODIFIEDTIME_OFFSET))(this);
		}

		::System::Void set_LastModifiedTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_LASTMODIFIEDTIME_OFFSET))(this, value);
		}

		::System::UInt32 get_UnencryptedDataSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this);
		}

		::System::Void set_UnencryptedDataSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_1_OFFSET))(this, other);
		}
	};
}
