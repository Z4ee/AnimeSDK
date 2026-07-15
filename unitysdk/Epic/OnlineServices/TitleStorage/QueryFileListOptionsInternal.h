#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::TitleStorage { class QueryFileListOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A37940)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A378C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LISTOFTAGS_OFFSET UNITYSDK_OFFSET(0x3A37840)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A37780)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A378B0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int QueryFileListOptionsInternal_TypeDefinitionIndex = 42855;

	struct alignas(8) QueryFileListOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ListOfTags; // 0x20
		::System::UInt32 m_ListOfTagsCount; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_ListOfTags(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LISTOFTAGS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::TitleStorage::QueryFileListOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
