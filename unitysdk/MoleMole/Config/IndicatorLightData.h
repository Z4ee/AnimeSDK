#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightData_TypeDefinitionIndex = 65519;

	struct alignas(4) IndicatorLightData
	{
		::UnityEngine::Color Color; // 0x10
		::System::Single DurationMin; // 0x20
		::System::Single DurationMax; // 0x24
	};
}
