#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPrepareFullScreenVideoNode_FullScreenVideoPlayItem_TypeDefinitionIndex = 73135;

	struct alignas(8) ConfigPrepareFullScreenVideoNode_FullScreenVideoPlayItem
	{
		::System::Boolean UseBlackBoardValue; // 0x10
		::System::String* VideoUrl; // 0x18
		::System::Boolean IsLoop; // 0x20
		::System::Single BlendInTime; // 0x24
		::System::Single BlendOutTime; // 0x28
		::System::String* SkipCondition; // 0x30
		::System::Boolean IsInvertCondition; // 0x38
	};
}
