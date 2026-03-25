#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int OverrideLightType_TypeDefinitionIndex = 60327;

	enum class OverrideLightType : ::System::Int32
	{
		None = 0,
		SceneLight = 1,
		MainLight = 2,
		CharacterLocalMainLight = 4,
		CustomMainLightDir = 8,
	};
}
