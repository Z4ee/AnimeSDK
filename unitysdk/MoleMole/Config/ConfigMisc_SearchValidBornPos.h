#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_SearchValidBornPos_TypeDefinitionIndex = 63731;

	struct alignas(8) ConfigMisc_SearchValidBornPos
	{
		::System::Single radius; // 0x10
		::System::Single maxSearchRadius; // 0x14
		::System::Single incrementalStep; // 0x18
		::System::Int32 maxAttempts; // 0x1C
		::Il2CppArray<::System::String*>* layerNames; // 0x20
	};
}
