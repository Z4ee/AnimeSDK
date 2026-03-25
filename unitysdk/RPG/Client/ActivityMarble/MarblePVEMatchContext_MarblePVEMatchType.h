#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVEMatchContext_MarblePVEMatchType_TypeDefinitionIndex = 61440;

	enum class MarblePVEMatchContext_MarblePVEMatchType : ::System::Int32
	{
		Mainline = 0,
		Challenge = 1,
	};
}
