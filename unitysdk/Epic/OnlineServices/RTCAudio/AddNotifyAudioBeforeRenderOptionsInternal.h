#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioBeforeRenderOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6A450)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6A3E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6A1B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6A3D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6A270)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_UNMIXEDAUDIO_OFFSET UNITYSDK_OFFSET(0x6A320)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioBeforeRenderOptionsInternal_TypeDefinitionIndex = 35592;

	struct alignas(8) AddNotifyAudioBeforeRenderOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::Int32 m_UnmixedAudio; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_UnmixedAudio(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_UNMIXEDAUDIO_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORERENDEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
