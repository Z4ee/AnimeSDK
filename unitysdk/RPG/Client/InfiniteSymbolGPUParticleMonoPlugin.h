#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class InfiniteSymbolGPUParticleBehavior; }
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GPUParticlesAsset; }

#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA634460)

namespace RPG::Client
{
	inline static constexpr unsigned int InfiniteSymbolGPUParticleMonoPlugin_TypeDefinitionIndex = 64814;

	class InfiniteSymbolGPUParticleMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::InfiniteSymbolGPUParticleBehavior*>
	{
	public:
		::UnityEngine::GPUParticlesAsset* ParticlesAsset; // 0x30
		::UnityEngine::ComputeShader* ComputeShaderOverride; // 0x38
		::System::Boolean SyncBounds; // 0x40
		::System::Int32 RandomSeed; // 0x44
		::System::String* SpawnKernelName; // 0x48
		::System::String* UpdateKernelName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
