#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceSectionType_TypeDefinitionIndex = 38903;

	enum class RenderSequenceSectionType : ::System::UInt32
	{
		All = 0x1,
		UV = 0x5,
		None = 0x0,
		ScreenContent = 0x2,
		SceneColorModify = 0x6,
		Sound = 0x3,
		Effect = 0x4,
	};
}
