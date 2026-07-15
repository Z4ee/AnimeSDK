#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/VolumeToBlockQuality.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace StageBudgetTool
{
	inline static constexpr unsigned int VolumeToBlock_TypeDefinitionIndex = 45954;

	struct alignas(8) VolumeToBlock
	{
		::System::String* BlockAlias; // 0x10
		::StageBudgetTool::VolumeToBlockQuality quality; // 0x18
	};
}
