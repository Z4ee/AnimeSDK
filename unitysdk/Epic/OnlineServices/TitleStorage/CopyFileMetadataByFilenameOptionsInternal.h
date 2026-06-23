#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::TitleStorage { class CopyFileMetadataByFilenameOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96DBC0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x96DB50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x96DA90)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x96D9D0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x96DB40)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int CopyFileMetadataByFilenameOptionsInternal_TypeDefinitionIndex = 34945;

	struct alignas(8) CopyFileMetadataByFilenameOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Filename; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
