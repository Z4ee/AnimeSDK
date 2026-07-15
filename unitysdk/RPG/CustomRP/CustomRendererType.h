#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomRendererType_TypeDefinitionIndex = 35994;

	enum class CustomRendererType : ::System::Int32
	{
		Defer = 0,
		Forward = 1,
	};
}
