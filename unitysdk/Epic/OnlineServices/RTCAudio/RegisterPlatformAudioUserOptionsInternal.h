#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class RegisterPlatformAudioUserOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9875F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9874D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x987400)
#define EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x987350)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int RegisterPlatformAudioUserOptionsInternal_TypeDefinitionIndex = 35917;

	struct alignas(8) RegisterPlatformAudioUserOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18

		::System::Void set_UserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
