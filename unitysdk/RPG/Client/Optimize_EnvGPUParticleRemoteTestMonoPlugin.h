#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Optimize_EnvGPUParticleRemoteTestBehavior; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTMONOPLUGIN_REFRESH_OFFSET UNITYSDK_OFFSET(0x191FC0E0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x191FC190)

namespace RPG::Client
{
	inline static constexpr unsigned int Optimize_EnvGPUParticleRemoteTestMonoPlugin_TypeDefinitionIndex = 70796;

	class Optimize_EnvGPUParticleRemoteTestMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Optimize_EnvGPUParticleRemoteTestBehavior*>
	{
	public:
		::System::Single intensity; // 0x30
		::System::Int32 particleCount; // 0x34
		::UnityEngine::ComputeShader* gpuParticleCS; // 0x38
		::UnityEngine::Material* renderMaterial; // 0x40
		::UnityEngine::Texture2D* noiseTexture; // 0x48
		::UnityEngine::Vector3 simulationRange; // 0x50
		::UnityEngine::Vector2 particleSizeRange; // 0x5C
		::System::Single windScale; // 0x64
		::UnityEngine::Vector3 windNoiseScale; // 0x68
		::UnityEngine::Vector3 windNoiseTilling; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTMONOPLUGIN_REFRESH_OFFSET))(this);
		}
	};
}
