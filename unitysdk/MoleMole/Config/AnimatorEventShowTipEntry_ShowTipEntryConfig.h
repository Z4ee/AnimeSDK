#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShowTipEntry_ShowTipEntryConfig_TypeDefinitionIndex = 64379;

	struct alignas(4) AnimatorEventShowTipEntry_ShowTipEntryConfig
	{
		::System::Int32 TipID; // 0x10
		::System::Int32 ShowPage; // 0x14
		::System::Single Weight; // 0x18
	};
}
