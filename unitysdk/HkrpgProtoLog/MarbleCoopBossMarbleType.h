#pragma once
#include "unitysdk/unitysdk.h"

namespace HkrpgProtoLog
{
	inline static constexpr unsigned int MarbleCoopBossMarbleType_TypeDefinitionIndex = 25050;

	enum class MarbleCoopBossMarbleType : ::System::Int32
	{
		None = 0,
		MarbleCoopBossMarbleSelf = 1,
		MarbleCoopBossMarbleMate = 2,
		MarbleCoopBossMarbleEnemy = 3,
	};
}
