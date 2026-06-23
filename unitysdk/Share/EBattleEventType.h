#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleEventType_TypeDefinitionIndex = 10795;

	enum class EBattleEventType : ::System::Int16
	{
		Normal = 0,
		Boss = 2,
		Elite = 1,
	};
}
