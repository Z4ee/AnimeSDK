#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FMemberReadyEventArgs_TypeDefinitionIndex = 63817;

	struct alignas(4) FMemberReadyEventArgs
	{
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ConfigId; // 0x14
	};
}
