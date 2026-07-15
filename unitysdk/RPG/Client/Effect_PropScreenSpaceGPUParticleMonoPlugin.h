#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_PropScreenSpaceGPUParticleMonoPluginBase_1.h"

namespace RPG::Client { class Effect_PropScreenSpaceGPUParticleBehavior; }

#define RPG_CLIENT_EFFECT_PROPSCREENSPACEGPUPARTICLEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15124650)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PropScreenSpaceGPUParticleMonoPlugin_TypeDefinitionIndex = 67386;

	class Effect_PropScreenSpaceGPUParticleMonoPlugin : public ::RPG::Client::Effect_PropScreenSpaceGPUParticleMonoPluginBase_1<::RPG::Client::Effect_PropScreenSpaceGPUParticleBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPSCREENSPACEGPUPARTICLEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
