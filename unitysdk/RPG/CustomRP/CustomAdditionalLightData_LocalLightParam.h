#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomAdditionalLightData_LocalLightParam_TypeDefinitionIndex = 36169;

	struct alignas(4) CustomAdditionalLightData_LocalLightParam
	{
		::UnityEngine::Color Color; // 0x10
		::UnityEngine::Vector2 Distance; // 0x20
		::System::Single DistancePow; // 0x28
		::System::Single DistanceStrength; // 0x2C
	};
}
