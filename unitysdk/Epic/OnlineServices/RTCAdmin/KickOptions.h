#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C0ABA50)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C0ABA70)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C0ABA60)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C0ABA80)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0ABA90)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int KickOptions_TypeDefinitionIndex = 43163;

	class KickOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
