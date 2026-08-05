#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int PieceColorModifyRequest_ColorModifyRequestType_TypeDefinitionIndex = 80945;

	enum class PieceColorModifyRequest_ColorModifyRequestType : ::System::Int32
	{
		High = 1,
		Normal = 0,
	};
}
