#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1BAB4940)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAB4920)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1BAB4950)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAB4930)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB4960)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int GetPermissionByKeyOptions_TypeDefinitionIndex = 43722;

	class GetPermissionByKeyOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONS_SET_KEY_OFFSET))(this, a1);
		}
	};
}
