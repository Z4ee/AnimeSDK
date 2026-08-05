#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRouletteWidgetControllerBase_DebugInfo_TypeDefinitionIndex = 72947;

	struct alignas(4) UIRouletteWidgetControllerBase_DebugInfo
	{
		::UnityEngine::Vector3 touchScreenPos; // 0x10
		::UnityEngine::Vector3 centerPos; // 0x1C
		::System::Single radius; // 0x28
		::UnityEngine::Vector3 direction; // 0x2C
		::System::Single timer; // 0x38
	};
}
