#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharaEyeAutoBlinkClip_BlinkType_TypeDefinitionIndex = 48387;

	enum class CharaEyeAutoBlinkClip_BlinkType : ::System::Int32
	{
		Random = 0,
		VoiceLoudness = 1,
	};
}
