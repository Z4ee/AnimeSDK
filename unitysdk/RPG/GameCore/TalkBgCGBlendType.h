#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkBgCGBlendType_TypeDefinitionIndex = 24827;

	enum class TalkBgCGBlendType : ::System::Int32
	{
		BlackMask = 0,
		AlphaFade = 1,
		Cut = 2,
	};
}
