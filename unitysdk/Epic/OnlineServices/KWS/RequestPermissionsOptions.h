#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D2769E0)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_GET_PERMISSIONKEYS_OFFSET UNITYSDK_OFFSET(0x1D276A00)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D2769F0)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_SET_PERMISSIONKEYS_OFFSET UNITYSDK_OFFSET(0x1D276A10)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D276A20)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int RequestPermissionsOptions_TypeDefinitionIndex = 35872;

	class RequestPermissionsOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _PermissionKeys_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_PermissionKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_GET_PERMISSIONKEYS_OFFSET))(this);
		}

		::System::Void set_PermissionKeys(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONS_SET_PERMISSIONKEYS_OFFSET))(this, value);
		}
	};
}
