#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_GET_LISTOFTAGS_OFFSET UNITYSDK_OFFSET(0x1D43FA10)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D43F9F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_SET_LISTOFTAGS_OFFSET UNITYSDK_OFFSET(0x1D43FA20)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D43FA00)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D43FA30)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int QueryFileListOptions_TypeDefinitionIndex = 45036;

	class QueryFileListOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _ListOfTags_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_ListOfTags()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_GET_LISTOFTAGS_OFFSET))(this);
		}

		::System::Void set_ListOfTags(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTOPTIONS_SET_LISTOFTAGS_OFFSET))(this, a1);
		}
	};
}
