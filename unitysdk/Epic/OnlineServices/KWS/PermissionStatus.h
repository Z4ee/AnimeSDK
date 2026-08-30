#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/KWS/KWSPermissionStatus.h"
#include "unitysdk/Epic/OnlineServices/KWS/PermissionStatusInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D694E70)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D694E90)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_1_OFFSET UNITYSDK_OFFSET(0x1D695110)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D694E80)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_OFFSET UNITYSDK_OFFSET(0x1D694EB0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D694EA0)
#define EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D695230)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int PermissionStatus_TypeDefinitionIndex = 45922;

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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_NAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::KWS::KWSPermissionStatus get_Status()
		{
			return ((::Epic::OnlineServices::KWS::KWSPermissionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::KWS::KWSPermissionStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::KWSPermissionStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatusInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatusInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_PERMISSIONSTATUS_SET_1_OFFSET))(this, a1);
		}
	};
}
