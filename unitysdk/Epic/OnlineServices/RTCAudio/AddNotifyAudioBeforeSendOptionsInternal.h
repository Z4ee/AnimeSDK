#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioBeforeSendOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x70FD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x70F50)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x70DD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x70F40)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x70E90)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioBeforeSendOptionsInternal_TypeDefinitionIndex = 42223;

	struct alignas(8) AddNotifyAudioBeforeSendOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOBEFORESENDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
