#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_VolumeConfig_TypeDefinitionIndex = 44500;

	class MHYSDKC_VolumeConfig : public ::System::Object
	{
	public:
		// static const ::System::String* AUDIO_EFFECTS_VOLUME; // 0x0
		// static const ::System::String* VOICE_VOLUME; // 0x0
		// static const ::System::String* BGM_VOLUME; // 0x0
	};
}
