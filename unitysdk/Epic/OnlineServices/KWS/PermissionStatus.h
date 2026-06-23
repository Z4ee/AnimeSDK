#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/KWSPermissionStatus.h"
#include "unitysdk/Epic/OnlineServices/KWS/PermissionStatusInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC56600)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CC56620)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_1_OFFSET UNITYSDK_OFFSET(0x1CC567F0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC56610)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_OFFSET UNITYSDK_OFFSET(0x1CC56640)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CC56630)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC56A40)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int PermissionStatus_TypeDefinitionIndex = 35858;

	class PermissionStatus : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::Epic::OnlineServices::KWS::KWSPermissionStatus _Status_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_NAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::KWS::KWSPermissionStatus get_Status()
		{
			return ((::Epic::OnlineServices::KWS::KWSPermissionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::KWS::KWSPermissionStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::KWSPermissionStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_STATUS_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatusInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatusInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_1_OFFSET))(this, other);
		}
	};
}
