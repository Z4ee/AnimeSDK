#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class GetFileMetadataCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ACE40)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9ACD10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9ACB80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9ACC40)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int GetFileMetadataCountOptionsInternal_TypeDefinitionIndex = 36089;

	struct alignas(8) GetFileMetadataCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
