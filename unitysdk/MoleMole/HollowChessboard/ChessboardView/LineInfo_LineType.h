#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard::ChessboardView
{
	inline static constexpr unsigned int LineInfo_LineType_TypeDefinitionIndex = 42448;

	enum class LineInfo_LineType : ::System::Int32
	{
		ZAxis = 2,
		XAxis = 0,
		YAxis = 1,
	};
}
