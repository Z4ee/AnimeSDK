#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class DuplicateFileOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x62FA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x62F20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_DESTINATIONFILENAME_OFFSET UNITYSDK_OFFSET(0x62E60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x62CF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x62F10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_SOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x62DB0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DuplicateFileOptionsInternal_TypeDefinitionIndex = 42445;

	struct alignas(8) DuplicateFileOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_SourceFilename; // 0x20
		::System::IntPtr m_DestinationFilename; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_SourceFilename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_SOURCEFILENAME_OFFSET))(this, a1);
		}

		::System::Void set_DestinationFilename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_DESTINATIONFILENAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
