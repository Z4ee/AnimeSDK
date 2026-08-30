#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioOutputStateOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x73D30)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x73CB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x73B30)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x73CA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x73BF0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioOutputStateOptionsInternal_TypeDefinitionIndex = 45272;

	struct alignas(8) AddNotifyAudioOutputStateOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
