#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class SetAudioInputSettingsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6EDE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6ED70)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x6EBF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6EB30)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6ED60)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_PLATFORMAEC_OFFSET UNITYSDK_OFFSET(0x6ECB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x6ECA0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SetAudioInputSettingsOptionsInternal_TypeDefinitionIndex = 41480;

	struct alignas(8) SetAudioInputSettingsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_DeviceId; // 0x20
		::System::Single m_Volume; // 0x28
		::System::Int32 m_PlatformAEC; // 0x2C

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_DeviceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Void set_Volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Void set_PlatformAEC(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_PLATFORMAEC_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
