#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_PropScreenSpaceGPUParticleMonoPluginBase_1.h"

class Class_4_0E22730FD35AB59E;

#define RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x150EA4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FiveDimPropScreenSpaceGPUParticleMonoPlugin_TypeDefinitionIndex = 67315;

	class Effect_FiveDimPropScreenSpaceGPUParticleMonoPlugin : public ::RPG::Client::Effect_PropScreenSpaceGPUParticleMonoPluginBase_1<::Class_4_0E22730FD35AB59E*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
