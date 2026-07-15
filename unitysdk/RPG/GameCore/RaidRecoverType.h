#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidRecoverType_TypeDefinitionIndex = 14005;

	enum class RaidRecoverType : ::System::Int32
	{
		Unknown = 0,
		RecoverHp = 1,
		RecoverMp = 2,
		ResetMp = 3,
		RecoverSp = 4,
		ResetSp = 5,
		RecoverHalfSp = 6,
	};
}
