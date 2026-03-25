#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AmbientOcclusioMethod_TypeDefinitionIndex = 29390;

	enum class AmbientOcclusioMethod : ::System::Int32
	{
		None = 0,
		SSAO = 1,
		HBAO = 2,
		GTAO = 3,
	};
}
