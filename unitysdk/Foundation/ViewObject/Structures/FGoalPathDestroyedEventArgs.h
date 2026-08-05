#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FGoalPathDestroyedEventArgs_TypeDefinitionIndex = 82083;

	struct alignas(8) FGoalPathDestroyedEventArgs
	{
		::System::String* GoalPathKey; // 0x10
	};
}
