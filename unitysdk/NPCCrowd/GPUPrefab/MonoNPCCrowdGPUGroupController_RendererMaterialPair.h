#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int MonoNPCCrowdGPUGroupController_RendererMaterialPair_TypeDefinitionIndex = 56500;

	struct alignas(8) MonoNPCCrowdGPUGroupController_RendererMaterialPair
	{
		::UnityEngine::Renderer* renderer; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* normalMats; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* ditherMats; // 0x20
	};
}
