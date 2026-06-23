#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::TitleStorage { class QueryFileListOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DBB30)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9DBAC0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LISTOFTAGS_OFFSET UNITYSDK_OFFSET(0x9DBA40)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9DB980)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9DBAB0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int QueryFileListOptionsInternal_TypeDefinitionIndex = 34973;

	struct alignas(8) QueryFileListOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ListOfTags; // 0x20
		::System::UInt32 m_ListOfTagsCount; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_ListOfTags(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LISTOFTAGS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::TitleStorage::QueryFileListOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
