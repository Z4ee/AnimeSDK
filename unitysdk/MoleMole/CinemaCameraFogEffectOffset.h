#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int CinemaCameraFogEffectOffset_TypeDefinitionIndex = 78513;

	struct alignas(4) CinemaCameraFogEffectOffset
	{
		::UnityEngine::Vector3 positionOffset; // 0x10
		::UnityEngine::Vector3 rotationOffset; // 0x1C
	};
}
