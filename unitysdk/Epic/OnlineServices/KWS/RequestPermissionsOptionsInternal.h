#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class RequestPermissionsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x476B0)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x47630)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x47440)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x47620)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_PERMISSIONKEYS_OFFSET UNITYSDK_OFFSET(0x47500)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int RequestPermissionsOptionsInternal_TypeDefinitionIndex = 42894;

	struct alignas(8) RequestPermissionsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_PermissionKeyCount; // 0x20
		::System::IntPtr m_PermissionKeys; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_PermissionKeys(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_PERMISSIONKEYS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::RequestPermissionsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
