#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL_INVOKE_OFFSET UNITYSDK_OFFSET(0x144B9640)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x144B9760)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetCurrentCell_TypeDefinitionIndex = 79914;

	class ChessboardGetCurrentCell : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_1<::MoleMole::HollowChessboard::HollowCell>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell Invoke()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCELL_INVOKE_OFFSET))(this);
		}
	};
}
