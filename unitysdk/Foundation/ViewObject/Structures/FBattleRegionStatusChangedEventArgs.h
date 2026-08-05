#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F8A99E32D870A94.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FBattleRegionStatusChangedEventArgs_TypeDefinitionIndex = 53137;

	struct alignas(8) FBattleRegionStatusChangedEventArgs
	{
		::System::String* BattleRegionName; // 0x10
		::Enum_3_6F8A99E32D870A94 PrevStatus; // 0x18
		::Enum_3_6F8A99E32D870A94 CurrentStatus; // 0x1C
	};
}
