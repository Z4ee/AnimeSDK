#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Audio/WwiseExternalAudioConfig_ExternalAudioType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB896EE0)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseExternalAudioConfig_TypeDefinitionIndex = 45511;

	class WwiseExternalAudioConfig : public ::System::Object
	{
	public:
		::RPGTools::Timeline::Audio::WwiseExternalAudioConfig_ExternalAudioType AudioType; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::System::UInt32 SFXID; // 0x18
		::System::Boolean IsLoopSFX; // 0x1C
		::System::String* EventName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCONFIG__CTOR_OFFSET))(this);
		}
	};
}
