#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioOutputStateOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6B850)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6B7E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6B660)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6B7D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6B720)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioOutputStateOptionsInternal_TypeDefinitionIndex = 41426;

	struct alignas(8) AddNotifyAudioOutputStateOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
