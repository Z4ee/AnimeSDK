#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class DuplicateFileOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E1D20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8E1CB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_DESTINATIONFILENAME_OFFSET UNITYSDK_OFFSET(0x8E1BF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E1A80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8E1CA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_SOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x8E1B40)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DuplicateFileOptionsInternal_TypeDefinitionIndex = 33861;

	struct alignas(8) DuplicateFileOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_SourceFilename; // 0x20
		::System::IntPtr m_DestinationFilename; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_SourceFilename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_SOURCEFILENAME_OFFSET))(this, value);
		}

		::System::Void set_DestinationFilename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_DESTINATIONFILENAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
