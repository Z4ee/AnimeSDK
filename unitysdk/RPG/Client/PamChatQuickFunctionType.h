#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatQuickFunctionType_TypeDefinitionIndex = 51358;

	enum class PamChatQuickFunctionType : ::System::Int32
	{
		Material = 1,
		Team = 2,
		LightCone = 3,
		Relic = 4,
	};
}
