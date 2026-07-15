#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_AIEventType_TypeDefinitionIndex = 14882;

	enum class ST_AIEventType : ::System::Int32
	{
		None = 0,
		InteractWithNpcMonster = 1,
		ReceiveStimulus = 2,
	};
}
