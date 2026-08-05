#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_443A885B4E84B185.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_IKRecord_TypeDefinitionIndex = 72968;

	struct alignas(4) UIBaseChatPlayController_IKRecord
	{
		::System::Int32 TagID; // 0x10
		::Enum_3_443A885B4E84B185 IKType; // 0x14
		::System::Boolean IsPush; // 0x18
	};
}
