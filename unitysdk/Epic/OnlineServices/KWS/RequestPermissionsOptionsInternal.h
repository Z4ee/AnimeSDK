#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class RequestPermissionsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BF990)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9BF920)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9BF730)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9BF910)
#define EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_PERMISSIONKEYS_OFFSET UNITYSDK_OFFSET(0x9BF7F0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int RequestPermissionsOptionsInternal_TypeDefinitionIndex = 36532;

	struct alignas(8) RequestPermissionsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_PermissionKeyCount; // 0x20
		::System::IntPtr m_PermissionKeys; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_PermissionKeys(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_PERMISSIONKEYS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::RequestPermissionsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_REQUESTPERMISSIONSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
