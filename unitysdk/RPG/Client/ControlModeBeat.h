#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ControlModeBeat_TypeDefinitionIndex = 65287;

	enum class ControlModeBeat : ::System::Int32
	{
		TransformGeneral = 0,
		MaterialSimple = 85,
		MaterialBlendTex = 86,
		ParticleEmit = 170,
	};
}
