#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ScreenSpaceGPUParticles/ScreenSpaceGPUParticlesEmitter_Shape.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLESEMITTER_GET_EMITTERMATRIX_OFFSET UNITYSDK_OFFSET(0x19F37E70)
#define RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLESEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F38170)

namespace RPG::Client::ScreenSpaceGPUParticles
{
	inline static constexpr unsigned int ScreenSpaceGPUParticlesEmitter_TypeDefinitionIndex = 70299;

	class ScreenSpaceGPUParticlesEmitter : public ::RPG::Client::TAMonoBase
	{
	public:
		::RPG::Client::ScreenSpaceGPUParticles::ScreenSpaceGPUParticlesEmitter_Shape EmitterShape; // 0x18
		::RPG::Client::TAUtils::SimpleTransform EmitterTransform; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLESEMITTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_EmitterMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLESEMITTER_GET_EMITTERMATRIX_OFFSET))(this);
		}
	};
}
