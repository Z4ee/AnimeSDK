#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1A1DDA20)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1A1DDA40)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1A1DDA30)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1A1DDA50)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DDA60)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int KickOptions_TypeDefinitionIndex = 33718;

	class KickOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
