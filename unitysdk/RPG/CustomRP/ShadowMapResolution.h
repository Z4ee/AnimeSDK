#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShadowMapResolution_TypeDefinitionIndex = 35993;

	enum class ShadowMapResolution : ::System::Int32
	{
		_256 = 256,
		_512 = 512,
		_1024 = 1024,
		_2048 = 2048,
		_4096 = 4096,
	};
}
