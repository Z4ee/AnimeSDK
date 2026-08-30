#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3E9180)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xB3E91A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3E9190)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xB3E91B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E91C0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioInputStateOptions_TypeDefinitionIndex = 45269;

	class AddNotifyAudioInputStateOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}
	};
}
