#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimType_TypeDefinitionIndex = 50223;

	enum class UVAnimType : ::System::Int32
	{
		FixAnchorScaleAnim = 2,
		Normal = 1,
		FullFillScaleAnim = 0,
	};
}
