#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class ParticleSystem; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimDestructiblePlat_Struct_2_EF2CDCADB84C17C5_TypeDefinitionIndex = 66888;

	struct alignas(8) MonoEffectPluginFiveDimDestructiblePlat_Struct_2_EF2CDCADB84C17C5
	{
		::System::Single Field_2_0; // 0x10
		::UnityEngine::Vector3 Field_2_1; // 0x14
		::UnityEngine::Vector3 Field_2_2; // 0x20
		::UnityEngine::ParticleSystem* Field_2_3; // 0x30
	};
}
