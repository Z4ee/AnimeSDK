#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo_TypeDefinitionIndex = 74114;

	struct alignas(4) MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C
		::UnityEngine::Bounds localBounds; // 0x38
	};
}
