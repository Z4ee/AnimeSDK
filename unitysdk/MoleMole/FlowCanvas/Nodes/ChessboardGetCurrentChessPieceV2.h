#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x149D6430)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x149D65A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetCurrentChessPieceV2_TypeDefinitionIndex = 67674;

	class ChessboardGetCurrentChessPieceV2 : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_1<::MoleMole::Vector2Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2__CTOR_OFFSET))(this);
		}

		::MoleMole::Vector2Int Invoke()
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECEV2_INVOKE_OFFSET))(this);
		}
	};
}
