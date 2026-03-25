#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AudioBuffer; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x86FB340)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86FB300)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86FB320)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_SET_BUFFER_OFFSET UNITYSDK_OFFSET(0x86FB350)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86FB310)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86FB330)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86FB360)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SendAudioOptions_TypeDefinitionIndex = 35651;

	class SendAudioOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::RTCAudio::AudioBuffer* _Buffer_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::AudioBuffer* get_Buffer()
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_GET_BUFFER_OFFSET))(this);
		}

		::System::Void set_Buffer(::Epic::OnlineServices::RTCAudio::AudioBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBuffer*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONS_SET_BUFFER_OFFSET))(this, value);
		}
	};
}
