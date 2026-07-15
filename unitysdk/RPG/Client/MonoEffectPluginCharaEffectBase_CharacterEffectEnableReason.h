#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason_TypeDefinitionIndex = 66807;

	enum class MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason : ::System::Int32
	{
		Default = 0,
		MonoEffectVisible = 1,
		Mute = 2,
		Task = 3,
		FunctionalMatValid = 4,
		_Count = 5,
	};
}
