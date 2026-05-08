#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18CDD3F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDD3D0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18CDD400)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDD3E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDD410)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int QueryFileOptions_TypeDefinitionIndex = 33896;

	class QueryFileOptions : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILEOPTIONS_SET_FILENAME_OFFSET))(this, value);
		}
	};
}
