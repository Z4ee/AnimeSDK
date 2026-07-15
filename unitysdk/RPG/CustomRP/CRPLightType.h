#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPLightType_TypeDefinitionIndex = 36158;

	enum class CRPLightType : ::System::Int32
	{
		SceneLight = 0,
		SceneShadowLight = 1,
		CharacterLight = 2,
		IndoorSceneShadowLight = 3,
		IndoorSceneLight = 4,
		IndoorCharacterLight = 5,
		EffectLight = 6,
		LocalLight = 7,
		CloudLight = 8,
		LocalLightRealTime = 9,
		Invalid = 100,
	};
}
