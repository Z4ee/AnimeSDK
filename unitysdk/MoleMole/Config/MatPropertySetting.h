#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MatPropertySetting_TypeDefinitionIndex = 40337;

	struct alignas(1) MatPropertySetting
	{
		::System::Boolean IsVeryHighQuaValid; // 0x10
		::System::Boolean IsHighQuaValid; // 0x11
		::System::Boolean IsMediumQuaValid; // 0x12
		::System::Boolean IsLowQuaValid; // 0x13
	};
}
