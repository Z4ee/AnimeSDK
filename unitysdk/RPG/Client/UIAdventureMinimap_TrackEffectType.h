#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_TrackEffectType_TypeDefinitionIndex = 65994;

	enum class UIAdventureMinimap_TrackEffectType : ::System::Int32
	{
		None = 0,
		Mission = 1,
		MappingInfo = 2,
	};
}
