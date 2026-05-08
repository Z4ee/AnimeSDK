#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_MUTE_OFFSET UNITYSDK_OFFSET(0x198B1A80)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x198B1A40)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x198B1A60)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_MUTE_OFFSET UNITYSDK_OFFSET(0x198B1A90)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x198B1A50)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x198B1A70)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x198B1AA0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int SetParticipantHardMuteOptions_TypeDefinitionIndex = 33733;

	class SetParticipantHardMuteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::System::Boolean _Mute_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Boolean get_Mute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_MUTE_OFFSET))(this);
		}

		::System::Void set_Mute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_MUTE_OFFSET))(this, value);
		}
	};
}
