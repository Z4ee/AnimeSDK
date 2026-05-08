#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/AbstractSignalCommon_SCustomDebugName_EMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int AbstractSignalCommon_SCustomDebugName_TypeDefinitionIndex = 8180;

	struct alignas(8) AbstractSignalCommon_SCustomDebugName
	{
		::SGF::SEvent::AbstractSignalCommon_SCustomDebugName_EMode Mode; // 0x10
		::System::String* Name; // 0x18
	};
}
