#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioBeforeSendOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA32830)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA327C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32640)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA327B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA32700)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioBeforeSendOptionsInternal_TypeDefinitionIndex = 35861;

	struct alignas(8) AddNotifyAudioBeforeSendOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
