#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class UnregisterPlatformAudioUserOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DA4F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9DA3D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9DA300)
#define EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x9DA250)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UnregisterPlatformAudioUserOptionsInternal_TypeDefinitionIndex = 35266;

	struct alignas(8) UnregisterPlatformAudioUserOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18

		::System::Void set_UserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
