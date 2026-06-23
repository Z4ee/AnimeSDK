#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UICpEndingChildWindowController_CpItemInfo_TypeDefinitionIndex = 90804;

	struct alignas(8) UICpEndingChildWindowController_CpItemInfo
	{
		::System::String* icon; // 0x10
		::System::Int32 rare; // 0x18
		::System::Int32 count; // 0x1C
	};
}
