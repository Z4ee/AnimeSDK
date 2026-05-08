#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard::ChessboardView
{
	inline static constexpr unsigned int LineInfo_LineType_TypeDefinitionIndex = 53130;

	enum class LineInfo_LineType : ::System::Int32
	{
		YAxis = 1,
		ZAxis = 2,
		XAxis = 0,
	};
}
