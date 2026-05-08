#pragma once
#include "unitysdk/unitysdk.h"

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int DiscardMode_TypeDefinitionIndex = 84939;

	enum class DiscardMode : ::System::Int32
	{
		Top = 0,
		Center = 1,
		Buttom = 2,
	};
}
