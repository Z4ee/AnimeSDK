#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::TitleStorage { class CopyFileMetadataByFilenameOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A36680)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A36600)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x3A36540)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A36480)
#define EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A365F0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int CopyFileMetadataByFilenameOptionsInternal_TypeDefinitionIndex = 42827;

	struct alignas(8) CopyFileMetadataByFilenameOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Filename; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
