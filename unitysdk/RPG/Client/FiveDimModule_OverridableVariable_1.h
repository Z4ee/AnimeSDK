#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule_OverridableVariable_1_TypeDefinitionIndex = 61290;

	template <typename T>
	struct FiveDimModule_OverridableVariable_1
	{
		T _OriginValue; // 0x0
		::System::Boolean _IsOverride; // 0x0
		T _OverrideValue; // 0x0
	};
}
