#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatMessageType_TypeDefinitionIndex = 23758;

	enum class FloatMessageType : ::System::Int32
	{
		All = -1,
		Default = 0,
		MiniToast = 1,
		SilverWolf999NormalKillHint = 2,
		SilverWolf999SpeicalKillHint = 3,
	};
}
