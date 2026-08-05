#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1DBCF0D0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DBCF0B0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1DBCF0E0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DBCF0C0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCF0F0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int GetPermissionByKeyOptions_TypeDefinitionIndex = 36499;

	class GetPermissionByKeyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _Key_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_KEY_OFFSET))(this, value);
		}
	};
}
