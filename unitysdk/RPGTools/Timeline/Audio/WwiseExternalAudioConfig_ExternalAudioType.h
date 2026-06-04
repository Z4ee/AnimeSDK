#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseExternalAudioConfig_ExternalAudioType_TypeDefinitionIndex = 46095;

	enum class WwiseExternalAudioConfig_ExternalAudioType : ::System::Int32
	{
		Voice = 0,
		SFX = 1,
		Event = 2,
	};
}
