#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/KWSPermissionStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::KWS { class PermissionStatus; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x417E0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41600)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x68F0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x41770)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x416B0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x41760)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x26F0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int PermissionStatusInternal_TypeDefinitionIndex = 36251;

	struct alignas(8) PermissionStatusInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Name; // 0x18
		::Epic::OnlineServices::KWS::KWSPermissionStatus m_Status; // 0x20

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_NAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::KWS::KWSPermissionStatus get_Status()
		{
			return ((::Epic::OnlineServices::KWS::KWSPermissionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::KWS::KWSPermissionStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::KWSPermissionStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_STATUS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::KWS::PermissionStatus* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::PermissionStatus*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
