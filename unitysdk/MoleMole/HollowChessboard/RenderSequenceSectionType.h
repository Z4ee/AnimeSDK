#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceSectionType_TypeDefinitionIndex = 84469;

	enum class RenderSequenceSectionType : ::System::UInt32
	{
		Effect = 0x4,
		None = 0x0,
		Sound = 0x3,
		SceneColorModify = 0x6,
		ScreenContent = 0x2,
		All = 0x1,
		UV = 0x5,
	};
}
