#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C4F2CAEB780F2D97.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FGroupChallengeEndArgs_TypeDefinitionIndex = 81623;

	struct alignas(4) FGroupChallengeEndArgs
	{
		::System::Int32 ChallengeID; // 0x10
		::Enum_3_C4F2CAEB780F2D97 Flags; // 0x14
		::System::Boolean IsSuccess; // 0x18
	};
}
