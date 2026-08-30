#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class SetAudioOutputSettingsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x77C30)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x77BB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x77AF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x77A30)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x77BA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x777B0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SetAudioOutputSettingsOptionsInternal_TypeDefinitionIndex = 45328;

	struct alignas(8) SetAudioOutputSettingsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_DeviceId; // 0x20
		::System::Single m_Volume; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_DeviceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::Void set_Volume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_VOLUME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
