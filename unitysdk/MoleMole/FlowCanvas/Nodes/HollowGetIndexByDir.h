#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYDIR_INVOKE_OFFSET UNITYSDK_OFFSET(0x15406350)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x15406730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowGetIndexByDir_TypeDefinitionIndex = 65875;

	class HollowGetIndexByDir : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_4<::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYDIR__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 startIndex, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir dir, ::System::Int32 distance)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYDIR_INVOKE_OFFSET))(this, startIndex, dir, distance);
		}
	};
}
