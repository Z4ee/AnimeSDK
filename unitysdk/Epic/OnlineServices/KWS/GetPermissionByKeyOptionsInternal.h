#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class GetPermissionByKeyOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x45A90)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x45A10)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x45950)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x45890)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x45A00)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int GetPermissionByKeyOptionsInternal_TypeDefinitionIndex = 42862;

	struct alignas(8) GetPermissionByKeyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Key; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::GetPermissionByKeyOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionByKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
