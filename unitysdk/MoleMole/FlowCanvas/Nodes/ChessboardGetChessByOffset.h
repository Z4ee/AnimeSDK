#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_3.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYOFFSET_INVOKE_OFFSET UNITYSDK_OFFSET(0x14989040)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x14989220)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessByOffset_TypeDefinitionIndex = 64760;

	class ChessboardGetChessByOffset : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_3<::System::Int32, ::System::Int32, ::MoleMole::Vector2Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYOFFSET__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 index, ::MoleMole::Vector2Int offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYOFFSET_INVOKE_OFFSET))(this, index, offset);
		}
	};
}
