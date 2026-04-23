#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SkinnedGPUParticles/SkinnedGPUParticlesBehavior_CustomVertexStreams.h"
#include "unitysdk/RPG/Client/SkinnedGPUParticles/SkinnedGPUParticlesBehavior_MotionHandleMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client::SkinnedGPUParticles { class SkinnedGPUParticlesBehavior; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0xB18F160)

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticles_TypeDefinitionIndex = 67833;

	class SkinnedGPUParticles : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticlesBehavior*>
	{
	public:
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x30
		::UnityEngine::SkinnedMeshRenderer* SkinnedMesh; // 0x38
		::System::Boolean SyncBounds; // 0x40
		::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticlesBehavior_MotionHandleMode MotionHandleMode; // 0x44
		::System::Single MotionDistanceLimit; // 0x48
		::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticlesBehavior_CustomVertexStreams CustomVertexStreams; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLES__CTOR_OFFSET))(this);
		}
	};
}
