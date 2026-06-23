#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TvModelDataConfig.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TvModelDataConfigGroup_TypeDefinitionIndex = 64386;

	struct alignas(8) ConfigHollowChessboard_TvModelDataConfigGroup
	{
		::MoleMole::Config::ConfigHollowChessboard_TvModelDataConfig Config; // 0x10
	};
}
