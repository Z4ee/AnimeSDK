#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceLayoutConfig_DensityLevel_TypeDefinitionIndex = 66074;

	struct alignas(8) AudienceLayoutConfig_DensityLevel
	{
		::System::Int32 num; // 0x10
		::Il2CppArray<::System::Single>* weights; // 0x18
	};
}
