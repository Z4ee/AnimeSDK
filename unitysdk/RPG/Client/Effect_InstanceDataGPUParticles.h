#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_InstanceDataGPUParticlesBehavior_InstanceDataRefreshMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_1_3FBBE3A5D4F5B883;
namespace RPG::Client { class Effect_InstanceDataGPUParticlesBehavior; }
namespace System { class String; }
namespace UnityEngine { class GPUParticlesRenderer; }

#define RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x9554550)
#define RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x95545A0)
#define RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x95545B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceDataGPUParticles_TypeDefinitionIndex = 57841;

	class Effect_InstanceDataGPUParticles : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_InstanceDataGPUParticlesBehavior*>
	{
	public:
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x30
		::Class_1_3FBBE3A5D4F5B883* Controller; // 0x38
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

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
