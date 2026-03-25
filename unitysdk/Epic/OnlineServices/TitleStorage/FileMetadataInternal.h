#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::TitleStorage { class FileMetadata; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DDE0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1DC00)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_MD5HASH_OFFSET UNITYSDK_OFFSET(0x1DAA0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0x5E00)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1DD70)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1DCB0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_FILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1D50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_MD5HASH_OFFSET UNITYSDK_OFFSET(0x1DB50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1DD60)
#define EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0xBC50)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int FileMetadataInternal_TypeDefinitionIndex = 35343;

	struct alignas(8) FileMetadataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_FileSizeBytes; // 0x14
		::System::IntPtr m_MD5Hash; // 0x18
		::System::IntPtr m_Filename; // 0x20
		::System::UInt32 m_UnencryptedDataSizeBytes; // 0x28

		::System::UInt32 get_FileSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_FILESIZEBYTES_OFFSET))(this);
		}

		::System::Void set_FileSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_FILESIZEBYTES_OFFSET))(this, value);
		}

		::System::String* get_MD5Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_MD5HASH_OFFSET))(this);
		}

		::System::Void set_MD5Hash(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_MD5HASH_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_FILENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_UnencryptedDataSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_GET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this);
		}

		::System::Void set_UnencryptedDataSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_UNENCRYPTEDDATASIZEBYTES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::TitleStorage::FileMetadata* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::FileMetadata*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_FILEMETADATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
