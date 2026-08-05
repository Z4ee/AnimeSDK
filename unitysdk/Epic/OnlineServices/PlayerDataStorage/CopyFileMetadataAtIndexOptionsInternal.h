#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class CopyFileMetadataAtIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x972D20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x972D10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x972B70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x972C30)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int CopyFileMetadataAtIndexOptionsInternal_TypeDefinitionIndex = 36069;

	struct alignas(8) CopyFileMetadataAtIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_Index; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
