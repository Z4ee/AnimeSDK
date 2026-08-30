#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/KWSPermissionStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::KWS { class PermissionStatus; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x48F50)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x48D60)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x6E30)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x48ED0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x48E10)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x48EC0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x2AA0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int PermissionStatusInternal_TypeDefinitionIndex = 45923;

	struct alignas(8) PermissionStatusInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Name; // 0x18
		::Epic::OnlineServices::KWS::KWSPermissionStatus m_Status; // 0x20

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_NAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::KWS::KWSPermissionStatus get_Status()
		{
			return ((::Epic::OnlineServices::KWS::KWSPermissionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::KWS::KWSPermissionStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::KWSPermissionStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::PermissionStatus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::PermissionStatus*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
