#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UICpEndingChildWindowController_CpDamageInfo_TypeDefinitionIndex = 90806;

	struct alignas(8) UICpEndingChildWindowController_CpDamageInfo
	{
		::System::Int32 rare; // 0x10
		::System::String* icon; // 0x18
		::System::Single value; // 0x20
	};
}
