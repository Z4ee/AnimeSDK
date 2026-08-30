#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int AlignmentType_TypeDefinitionIndex = 74611;

	enum class AlignmentType : ::System::Int32
	{
		Center = 0,
		Top = 1,
		Bottom = 2,
		TopBottom = 3,
		CenterTopBottom = 4,
		CenterBottomTop = 5,
	};
}
