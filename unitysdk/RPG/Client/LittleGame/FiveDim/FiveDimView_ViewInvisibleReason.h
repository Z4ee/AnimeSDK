#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_ViewInvisibleReason_TypeDefinitionIndex = 76721;

	enum class FiveDimView_ViewInvisibleReason : ::System::UInt32
	{
		None = 0x0,
		CullByCamera = 0x1,
	};
}
