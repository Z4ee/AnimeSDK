#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerEffectSourceType_TypeDefinitionIndex = 17314;

	enum class ServerEffectSourceType : ::System::Int32
	{
		Unknow = 0,
		Rogue = 1,
	};
}
