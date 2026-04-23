#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleManualUpdate_ManualUpdateType_TypeDefinitionIndex = 64614;

	enum class MonoEffectPluginParticleManualUpdate_ManualUpdateType : ::System::Int32
	{
		None = 0,
		EndOfLateTick = 1,
	};
}
