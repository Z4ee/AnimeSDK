#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class GetPermissionsCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x418F0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x418E0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x41750)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x41810)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int GetPermissionsCountOptionsInternal_TypeDefinitionIndex = 42061;

	struct alignas(8) GetPermissionsCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::GetPermissionsCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
