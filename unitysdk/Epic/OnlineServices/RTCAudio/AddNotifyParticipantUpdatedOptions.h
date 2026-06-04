#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA3465A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA3465C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA3465B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA3465D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA3465E0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyParticipantUpdatedOptions_TypeDefinitionIndex = 42230;

	class AddNotifyParticipantUpdatedOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}
	};
}
