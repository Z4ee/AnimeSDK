#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_3.h"

namespace MoleMole { class ChessEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x14278BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x14278D00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessEntitysByPosition_TypeDefinitionIndex = 69412;

	class ChessboardGetChessEntitysByPosition : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_3<::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYPOSITION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>* Invoke(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYPOSITION_INVOKE_OFFSET))(this, x, y);
		}
	};
}
