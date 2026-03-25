#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x86BD5A0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86BD580)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x86BD5B0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86BD590)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86BD5C0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DeleteFileOptions_TypeDefinitionIndex = 35811;

	class DeleteFileOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _Filename_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILEOPTIONS_SET_FILENAME_OFFSET))(this, value);
		}
	};
}
