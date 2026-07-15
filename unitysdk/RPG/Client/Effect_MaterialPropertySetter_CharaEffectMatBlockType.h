#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_MaterialPropertySetter_CharaEffectMatBlockType_TypeDefinitionIndex = 67354;

	enum class Effect_MaterialPropertySetter_CharaEffectMatBlockType : ::System::Int32
	{
		None = 0,
		Int = 1,
		Float = 2,
		Color = 3,
		Vector = 4,
		Tex = 5,
	};
}
