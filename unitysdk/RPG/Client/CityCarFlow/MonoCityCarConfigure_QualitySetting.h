#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarConfigure_QualitySetting_TypeDefinitionIndex = 64541;

	struct alignas(4) MonoCityCarConfigure_QualitySetting
	{
		::System::UInt32 MaxCarCount; // 0x10
		::System::Single CarGenerateSpeedRatio; // 0x14
	};
}
