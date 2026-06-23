#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMainHollowShowType_TypeDefinitionIndex = 16937;

	enum class EMainHollowShowType : ::System::Int32
	{
		Normal = 0,
		OldChessboard = 2,
		DifficutyBattle = 1,
	};
}
