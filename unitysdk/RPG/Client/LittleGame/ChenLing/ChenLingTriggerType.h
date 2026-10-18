#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingTriggerType_TypeDefinitionIndex = 43771;

	enum class ChenLingTriggerType : ::System::Int32
	{
		Invalid = 0,
		OnHit = 1,
	};
}
