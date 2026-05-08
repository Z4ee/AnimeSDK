#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ConfigHollowChessPieceEdge_HEdge.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ConfigHollowChessPieceEdge_VEdge.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ConfigHollowChessPieceEdge_TypeDefinitionIndex = 43437;

	struct alignas(4) ConfigHollowChessboard_ConfigHollowChessPieceEdge
	{
		::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge_HEdge Top; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge_HEdge Bottom; // 0x14
		::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge_VEdge Left; // 0x18
		::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge_VEdge Right; // 0x1C
	};
}
