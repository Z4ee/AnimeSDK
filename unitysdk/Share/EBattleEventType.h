#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleEventType_TypeDefinitionIndex = 17685;

	enum class EBattleEventType : ::System::Int16
	{
		Normal = 0,
		Elite = 1,
		Boss = 2,
	};
}
