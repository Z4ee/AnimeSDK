#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TvModelDataConfig_TypeDefinitionIndex = 64399;

	struct alignas(8) ConfigHollowChessboard_TvModelDataConfig
	{
		::MoleMole::HollowChessPieceSizeType SizeType; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_TVModelData ModelData; // 0x18
	};
}
