#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::TitleStorage { class GetFileMetadataCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E990)
#define EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1E980)
#define EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E7F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1E8B0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int GetFileMetadataCountOptionsInternal_TypeDefinitionIndex = 45019;

	struct alignas(8) GetFileMetadataCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
