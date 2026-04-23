#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_PropScreenSpaceGPUParticleMonoPluginBase_1.h"

class Class_4_F294B17C5EA0C633;

#define RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA1CCB50)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FiveDimPropScreenSpaceGPUParticleMonoPlugin_TypeDefinitionIndex = 64972;

	class Effect_FiveDimPropScreenSpaceGPUParticleMonoPlugin : public ::RPG::Client::Effect_PropScreenSpaceGPUParticleMonoPluginBase_1<::Class_4_F294B17C5EA0C633*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
