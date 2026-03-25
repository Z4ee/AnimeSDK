#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_TrackEffectType_TypeDefinitionIndex = 56429;

	enum class UIAdventureMinimap_TrackEffectType : ::System::Int32
	{
		None = 0,
		Mission = 1,
		MappingInfo = 2,
	};
}
