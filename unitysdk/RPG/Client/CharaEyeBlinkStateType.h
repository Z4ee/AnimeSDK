#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeBlinkStateType_TypeDefinitionIndex = 65327;

	enum class CharaEyeBlinkStateType : ::System::Int32
	{
		Stop = 0,
		Random = 1,
		VoiceLoudness = 2,
	};
}
