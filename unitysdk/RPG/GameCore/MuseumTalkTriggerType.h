#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumTalkTriggerType_TypeDefinitionIndex = 13728;

	enum class MuseumTalkTriggerType : ::System::Int32
	{
		Unknown = 0,
		EnterOpenDay = 1,
		Market = 3,
		ReturnOpenDay = 4,
	};
}
