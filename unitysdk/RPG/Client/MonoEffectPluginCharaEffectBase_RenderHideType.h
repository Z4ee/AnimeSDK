#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_RenderHideType_TypeDefinitionIndex = 66806;

	enum class MonoEffectPluginCharaEffectBase_RenderHideType : ::System::Int32
	{
		OriginState = 0,
		HideState = 1,
		ShowState = 2,
		DontReset = 3,
	};
}
