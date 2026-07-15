#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::KWS { class GetPermissionsCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A4AE50)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A4AE40)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A4ACB0)
#define EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A4AD70)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int GetPermissionsCountOptionsInternal_TypeDefinitionIndex = 43725;

	struct alignas(8) GetPermissionsCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::GetPermissionsCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_GETPERMISSIONSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
