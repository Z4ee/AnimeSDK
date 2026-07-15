#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroParticleProperty_ParticleType_TypeDefinitionIndex = 47752;

	enum class EnviroParticleProperty_ParticleType : ::System::Int32
	{
		Cloud = 0,
		Fog = 1,
		Custom = 2,
	};
}
