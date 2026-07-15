#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroGpuParticleProperty_ParticleSimulationType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGpuParticleProperty_EnviroGpuParticle_TypeDefinitionIndex = 47746;

	struct alignas(8) EnviroGpuParticleProperty_EnviroGpuParticle
	{
		::EnviromentSystem::EnviroGpuParticleProperty_ParticleSimulationType m_GpuSimType; // 0x10
		::UnityEngine::Vector3 m_SimulationRange; // 0x14
		::UnityEngine::Vector2 m_GpuParticleSize; // 0x20
		::System::Single m_GpuParticleWindScale; // 0x28
		::UnityEngine::Vector3 m_GpuParticleWindNoiseScale; // 0x2C
		::UnityEngine::Vector3 m_GpuParticleWindNoiseTilling; // 0x38
		::System::String* m_MaterialPath; // 0x48
		::UnityEngine::Material* m_RenderignMat; // 0x50
		::UnityEngine::MeshRenderer* GPUParticleRenderer; // 0x58
		::UnityEngine::MeshFilter* GPUParticleMeshFilter; // 0x60
		::UnityEngine::RenderTexture* WeatherGPUParticlePosition; // 0x68
		::UnityEngine::RenderTexture* WeatherGPUParticleSpeed; // 0x70
		::UnityEngine::RenderTexture* WeatherGPUParticleWindZone; // 0x78
		::UnityEngine::Vector3 GpuParticleBound_Mins_Old; // 0x80
		::UnityEngine::Vector3 GpuParticleBound_Maxs_Old; // 0x8C
		::System::Int32 FrameCount; // 0x98
		::UnityEngine::Material* m_RenderignMatInstanced; // 0xA0
	};
}
