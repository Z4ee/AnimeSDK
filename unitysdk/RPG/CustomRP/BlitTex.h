#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BlitTex_TypeDefinitionIndex = 36344;

	enum class BlitTex : ::System::Int32
	{
		None = -100,
		MainTex = -200,
		BlitTex = -300,
	};
}
