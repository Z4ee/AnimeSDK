#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatMessageType_TypeDefinitionIndex = 20670;

	enum class FloatMessageType : ::System::Int32
	{
		All = -1,
		Default = 0,
		MiniToast = 1,
	};
}
