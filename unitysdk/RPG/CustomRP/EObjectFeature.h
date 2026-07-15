#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int EObjectFeature_TypeDefinitionIndex = 36105;

	enum class EObjectFeature : ::System::Int32
	{
		None = 0,
		Player = 1,
		CastShadow = 2,
		IsStatic = 4,
		IsFrequencyMove = 8,
		OverridePosition = 16,
		ShadowProbe = 32,
		ManualSetLight = 64,
		EditorActor = 128,
	};
}
