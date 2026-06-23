#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"

namespace MoleMole { class ChessEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x12FFEAB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFEBC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessEntitysByIndex_TypeDefinitionIndex = 40864;

	class ChessboardGetChessEntitysByIndex : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>* Invoke(::System::Int32 index)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX_INVOKE_OFFSET))(this, index);
		}
	};
}
