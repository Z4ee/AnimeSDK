#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_DynamicDrop_TypeDefinitionIndex = 86899;

	struct alignas(4) ConfigViewObjectMisc_DynamicDrop
	{
		::System::Single minDropDistance; // 0x10
		::System::Single sweepStepAngle; // 0x14
	};
}
