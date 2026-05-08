#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO_INVOKE_OFFSET UNITYSDK_OFFSET(0x14278E60)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x14278EC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPlayerMoveTo_TypeDefinitionIndex = 79380;

	class ChessboardPlayerMoveTo : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index, ::System::Boolean needMoveAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETO_INVOKE_OFFSET))(this, index, needMoveAnim);
		}
	};
}
