#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TalkConvinceSpliteLineType_TypeDefinitionIndex = 60779;

	enum class TalkConvinceSpliteLineType : ::System::Int32
	{
		WhiteWeak = 0,
		WhiteMedium = 1,
		WhiteStrong = 2,
		RedWeak = 3,
		RedMedium = 4,
		RedStrong = 5,
	};
}
