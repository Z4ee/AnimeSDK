#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticlesBehavior_ParticleAttributes_TypeDefinitionIndex = 70294;

	struct alignas(4) SkinnedGPUParticlesBehavior_ParticleAttributes
	{
		::System::UInt32 id; // 0x10
		::System::Single age; // 0x14
		::System::Single lifeTime; // 0x18
		::UnityEngine::Vector3 position; // 0x1C
		::UnityEngine::Vector3 scale; // 0x28
	};
}
