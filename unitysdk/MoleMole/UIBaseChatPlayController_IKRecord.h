#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_104C7FF74440A413.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_IKRecord_TypeDefinitionIndex = 39182;

	struct alignas(4) UIBaseChatPlayController_IKRecord
	{
		::System::Int32 TagID; // 0x10
		::Enum_3_104C7FF74440A413 IKType; // 0x14
		::System::Boolean IsPush; // 0x18
	};
}
