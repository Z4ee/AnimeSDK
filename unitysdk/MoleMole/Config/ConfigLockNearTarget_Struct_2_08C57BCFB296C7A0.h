#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/System/ValueType.h"

class Class_1_CB7F0487F7A6164A;

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearTarget_Struct_2_08C57BCFB296C7A0_TypeDefinitionIndex = 60445;

	struct alignas(8) ConfigLockNearTarget_Struct_2_08C57BCFB296C7A0
	{
		::Class_1_CB7F0487F7A6164A* Field_2_0; // 0x10
		::System::Single Field_2_1; // 0x18
		::MoleMole::Config::CharacterAliveState Field_2_2; // 0x1C
	};
}
