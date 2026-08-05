#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAdmin { class KickOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99A3F0)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x99A380)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x99A370)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x99A200)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x99A2B0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int KickOptionsInternal_TypeDefinitionIndex = 35941;

	struct alignas(8) KickOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_RoomName; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::KickOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::KickOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
