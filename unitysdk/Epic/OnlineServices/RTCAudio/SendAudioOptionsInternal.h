#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AudioBuffer; }
namespace Epic::OnlineServices::RTCAudio { class SendAudioOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C1DF20)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C1DEA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_BUFFER_OFFSET UNITYSDK_OFFSET(0x3C1DD70)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C1DC00)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C1DE90)
#define EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x3C1DCC0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SendAudioOptionsInternal_TypeDefinitionIndex = 45324;

	struct alignas(8) SendAudioOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_Buffer; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::System::Void set_Buffer(::Epic::OnlineServices::RTCAudio::AudioBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBuffer*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_BUFFER_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::SendAudioOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SendAudioOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SENDAUDIOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
