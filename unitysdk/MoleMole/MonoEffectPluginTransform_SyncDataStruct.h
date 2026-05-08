#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_Enum_3_7C5E2AB6BB04F67F.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginTransform_SyncDataStruct_TypeDefinitionIndex = 79007;

	struct alignas(8) MonoEffectPluginTransform_SyncDataStruct
	{
		::MoleMole::MonoEffectPluginTransform_Enum_3_7C5E2AB6BB04F67F syncType; // 0x10
		::UnityEngine::ParticleSystem* particleSystem; // 0x18
		::UnityEngine::ParticleSystemRenderer* psRenderer; // 0x20
		::System::Boolean everInited; // 0x28
	};
}
