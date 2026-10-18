#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftBanCellAxesDirectionType_TypeDefinitionIndex = 41645;

	enum class MechCraftBanCellAxesDirectionType : ::System::Int32
	{
		None = 0,
		TopLeftToBottomRight = 1,
		TopRightToBottomLeft = 2,
		BottomLeftToTopRight = 3,
		BottomRightToTopLeft = 4,
	};
}
