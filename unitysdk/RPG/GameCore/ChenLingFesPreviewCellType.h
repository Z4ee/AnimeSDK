#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesPreviewCellType_TypeDefinitionIndex = 17703;

	enum class ChenLingFesPreviewCellType : ::System::Int32
	{
		None = 0,
		Occupy = 1,
		EffectCell = 2,
		EffectItem = 3,
		EditOccupy = 4,
	};
}
