#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterBehavior_EmitType_TypeDefinitionIndex = 67703;

	enum class DialogEmitterBehavior_EmitType : ::System::Int32
	{
		ChatFrame = 1,
		CentralEmit = 2,
		DirectionalEmit = 3,
		OnlyRenderer = 4,
	};
}
