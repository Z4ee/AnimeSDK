#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCinemaDepthOfFieldParam_TypeDefinitionIndex = 65976;

	struct alignas(4) ConfigCinemaDepthOfFieldParam
	{
		::UnityEngine::Rendering::Universal::DepthOfFieldMode mode; // 0x10
		::System::Single focusDistance; // 0x14
		::System::Single focalLength; // 0x18
		::System::Single aperture; // 0x1C
	};
}
