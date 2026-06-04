#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/FileMetadataInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0xA320DA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0xA320D60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_LASTMODIFIEDTIME_OFFSET UNITYSDK_OFFSET(0xA320DC0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_MD5HASH_OFFSET UNITYSDK_OFFSET(0xA320D80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0xA320DF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_1_OFFSET UNITYSDK_OFFSET(0xA3213C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xA320DB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0xA320D70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_LASTMODIFIEDTIME_OFFSET UNITYSDK_OFFSET(0xA320DE0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_MD5HASH_OFFSET UNITYSDK_OFFSET(0xA320D90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_OFFSET UNITYSDK_OFFSET(0xA320E10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0xA320E00)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3214F0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int FileMetadata_TypeDefinitionIndex = 42446;

	class FileMetadata : public ::System::Object
	{
	public:
		::System::String* _MD5Hash_k__BackingField; // 0x10
		::System::String* _Filename_k__BackingField; // 0x18
		::System::UInt32 _UnencryptedDataSizeBytes_k__BackingField; // 0x20
		::System::UInt32 _FileSizeBytes_k__BackingField; // 0x24
		::System::Nullable_1<::System::DateTimeOffset> _LastModifiedTime_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FileSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILESIZEBYTES_OFFSET))(this);
		}

		::System::Void set_FileSizeBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILESIZEBYTES_OFFSET))(this, a1);
		}

		::System::String* get_MD5Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_MD5HASH_OFFSET))(this);
		}

		::System::Void set_MD5Hash(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_MD5HASH_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_LastModifiedTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_LASTMODIFIEDTIME_OFFSET))(this);
		}

		::System::Void set_LastModifiedTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_LASTMODIFIEDTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnencryptedDataSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this);
		}

		::System::Void set_UnencryptedDataSizeBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_FILEMETADATA_SET_1_OFFSET))(this, a1);
		}
	};
}
