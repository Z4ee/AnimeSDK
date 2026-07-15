#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PropScreenSpaceGPUParticleMonoPluginBase_1_TypeDefinitionIndex = 67387;

	template <typename TBehavior>
	class Effect_PropScreenSpaceGPUParticleMonoPluginBase_1 : public ::RPG::Client::TAMonoPlugin_1<TBehavior>
	{
	public:
		::System::UInt32 MaxParticleNum; // 0x0
		::System::Boolean HideTargetGO; // 0x0
		::System::Single TotalScale; // 0x0
		::System::Boolean UsedInUI3D; // 0x0
	};
}
