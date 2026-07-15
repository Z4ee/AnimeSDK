#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_DOFMethod_TypeDefinitionIndex = 36255;

	enum class RPGDepthOfField_DOFMethod : ::System::Int32
	{
		Default = 0,
		Hexagon = 1,
		Circle = 2,
	};
}
