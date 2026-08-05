#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28D6F6163F0E0EBC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int FeatureTargetExtraInfo_TypeDefinitionIndex = 89356;

	struct alignas(8) FeatureTargetExtraInfo
	{
		::Enum_3_28D6F6163F0E0EBC Type; // 0x10
		::System::String* Value; // 0x18
	};
}
