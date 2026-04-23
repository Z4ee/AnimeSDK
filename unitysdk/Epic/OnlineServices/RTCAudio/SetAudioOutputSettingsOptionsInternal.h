#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class SetAudioOutputSettingsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6F100)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6F090)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x6EFD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6EF10)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6F080)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x6ECA0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SetAudioOutputSettingsOptionsInternal_TypeDefinitionIndex = 41482;

	struct alignas(8) SetAudioOutputSettingsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_DeviceId; // 0x20
		::System::Single m_Volume; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_DeviceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Void set_Volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
