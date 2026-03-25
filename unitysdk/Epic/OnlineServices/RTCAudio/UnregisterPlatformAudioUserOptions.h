#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONS_GET_USERID_OFFSET UNITYSDK_OFFSET(0x86FC730)
#define EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONS_SET_USERID_OFFSET UNITYSDK_OFFSET(0x86FC740)
#define EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86FC750)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UnregisterPlatformAudioUserOptions_TypeDefinitionIndex = 35657;

	class UnregisterPlatformAudioUserOptions : public ::System::Object
	{
	public:
		::System::String* _UserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_UserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONS_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UNREGISTERPLATFORMAUDIOUSEROPTIONS_SET_USERID_OFFSET))(this, value);
		}
	};
}
