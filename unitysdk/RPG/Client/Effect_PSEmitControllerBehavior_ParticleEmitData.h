#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PSEmitControllerBehavior_ParticleEmitData_TypeDefinitionIndex = 67359;

	struct alignas(4) Effect_PSEmitControllerBehavior_ParticleEmitData
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Scale; // 0x1C
		::UnityEngine::Vector3 Rotation; // 0x28
		::System::Single AnimDelay; // 0x34
	};
}
