#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcSweep2D_PositionWithU_TypeDefinitionIndex = 34504;

	struct alignas(4) BGCcSweep2D_PositionWithU
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single U; // 0x1C
	};
}
