#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0x177FCDC0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x177FD260)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCellRangeCheck_TypeDefinitionIndex = 82414;

	class ChessboardCellRangeCheck : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_2<::System::Boolean, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 predictIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCELLRANGECHECK_INVOKE_OFFSET))(this, predictIndex);
		}
	};
}
