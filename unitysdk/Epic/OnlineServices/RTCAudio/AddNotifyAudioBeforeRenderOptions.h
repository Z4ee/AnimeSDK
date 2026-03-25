#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86ECA90)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86ECAB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_GET_UNMIXEDAUDIO_OFFSET UNITYSDK_OFFSET(0x86ECAD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86ECAA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86ECAC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_SET_UNMIXEDAUDIO_OFFSET UNITYSDK_OFFSET(0x86ECAE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86ECAF0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioBeforeRenderOptions_TypeDefinitionIndex = 35591;

	class AddNotifyAudioBeforeRenderOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::Boolean _UnmixedAudio_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Boolean get_UnmixedAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_GET_UNMIXEDAUDIO_OFFSET))(this);
		}

		::System::Void set_UnmixedAudio(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONS_SET_UNMIXEDAUDIO_OFFSET))(this, value);
		}
	};
}
