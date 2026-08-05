#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A041370)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A041490)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessEntityIndex_TypeDefinitionIndex = 56666;

	class ChessboardGetChessEntityIndex : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::System::Int32, ::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYINDEX_INVOKE_OFFSET))(this, chessEntity);
		}
	};
}
