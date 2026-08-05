#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class CopyFileMetadataByFilenameOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x906DE0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x906D70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x906CB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x906BF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x906D60)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int CopyFileMetadataByFilenameOptionsInternal_TypeDefinitionIndex = 36071;

	struct alignas(8) CopyFileMetadataByFilenameOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Filename; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATABYFILENAMEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
