#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTransform_Struct_2_0A482C4B1193FF12_TypeDefinitionIndex = 66988;

	struct alignas(8) MonoEffectPluginTransform_Struct_2_0A482C4B1193FF12
	{
		::UnityEngine::Transform* Field_2_0; // 0x10
		::UnityEngine::ParticleSystemRenderer* Field_2_1; // 0x18
		::UnityEngine::Matrix4x4 Field_2_2; // 0x20
	};
}
