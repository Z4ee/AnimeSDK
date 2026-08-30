#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowIntersection_SignRuleData_TypeDefinitionIndex = 80851;

	struct alignas(4) MonoCityCarFlowIntersection_SignRuleData
	{
		::System::Int32 Value; // 0x10
		::System::Single Duration; // 0x14
	};
}
