#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupStateChangeData_TypeDefinitionIndex = 78859;

	struct alignas(8) GroupStateChangeData
	{
		::System::UInt32 GroupId; // 0x10
		::System::UInt32 MemberId; // 0x14
		::System::String* StateName; // 0x18
		::System::Int32 CurrentStateValue; // 0x20
		::System::Nullable_1<::System::Int32> OldStateValue; // 0x24
	};
}
