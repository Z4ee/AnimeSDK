#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class GetFileMetadataCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5EAD0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5E9A0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x5E810)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x5E8D0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int GetFileMetadataCountOptionsInternal_TypeDefinitionIndex = 41648;

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
