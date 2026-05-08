#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FBattleRegionInOutEventArgs_TypeDefinitionIndex = 46833;

	struct alignas(8) FBattleRegionInOutEventArgs
	{
		::System::String* BattleRegionName; // 0x10
	};
}
