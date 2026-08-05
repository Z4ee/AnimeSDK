#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceSectionType_TypeDefinitionIndex = 79728;

	enum class RenderSequenceSectionType : ::System::UInt32
	{
		All = 0x1,
		Sound = 0x3,
		SceneColorModify = 0x6,
		UV = 0x5,
		ScreenContent = 0x2,
		Effect = 0x4,
		None = 0x0,
	};
}
