#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_InstanceDataGPUParticlesBehavior_InstanceDataRefreshMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_1_648258D77F597F54;
namespace RPG::Client { class Effect_InstanceDataGPUParticlesBehavior; }
namespace System { class String; }
namespace UnityEngine { class GPUParticlesRenderer; }

#define RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x150FC0D0)
#define RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x150FC120)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceDataGPUParticles_TypeDefinitionIndex = 67480;

	class Effect_InstanceDataGPUParticles : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_InstanceDataGPUParticlesBehavior*>
	{
	public:
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x30
		::Class_1_648258D77F597F54* Controller; // 0x38
		::RPG::Client::Effect_InstanceDataGPUParticlesBehavior_InstanceDataRefreshMode RefreshMode; // 0x40
		::System::Single RefreshInterval; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
