#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VortexParticlesBehavior_ParticleAttributes_TypeDefinitionIndex = 67230;

	struct alignas(4) VortexParticlesBehavior_ParticleAttributes
	{
		::System::Single age; // 0x10
		::System::Single lifeTime; // 0x14
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Vector3 rotation; // 0x24
		::UnityEngine::Vector3 scale; // 0x30
		::UnityEngine::Vector3 velocity; // 0x3C
		::System::Single orbitSpeed; // 0x48
		::System::Single selfRotSpeed; // 0x4C
	};
}
