#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0xA34FDF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0xA34FE00)
#define EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA34FE10)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int RegisterPlatformAudioUserOptions_TypeDefinitionIndex = 42278;

	class RegisterPlatformAudioUserOptions : public ::System::Object
	{
	public:
		::System::String* _UserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_UserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_REGISTERPLATFORMAUDIOUSEROPTIONS_SET_USERID_OFFSET))(this, a1);
		}
	};
}
