#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client::ScreenSpaceGPUParticles { class ScreenSpaceGPUParticlesBehavior; }
namespace RPG::Client::ScreenSpaceGPUParticles { class ScreenSpaceGPUParticlesEmitter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GPUParticlesRenderer; }

#define RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x19F36E00)

namespace RPG::Client::ScreenSpaceGPUParticles
{
	inline static constexpr unsigned int ScreenSpaceGPUParticles_TypeDefinitionIndex = 70297;

	class ScreenSpaceGPUParticles : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ScreenSpaceGPUParticles::ScreenSpaceGPUParticlesBehavior*>
	{
	public:
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ScreenSpaceGPUParticles::ScreenSpaceGPUParticlesEmitter*>* Emitters; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLES__CTOR_OFFSET))(this);
		}
	};
}
