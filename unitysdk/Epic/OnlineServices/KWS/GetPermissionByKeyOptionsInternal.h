#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class GetPermissionByKeyOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FA280)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9FA210)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9FA150)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9FA090)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9FA200)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int GetPermissionByKeyOptionsInternal_TypeDefinitionIndex = 36500;

	struct alignas(8) GetPermissionByKeyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Key; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::GetPermissionByKeyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionByKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
