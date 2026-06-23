#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYDIR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1911A210)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1911A640)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowGetPositionByDir_TypeDefinitionIndex = 47371;

	class HollowGetPositionByDir : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_4<::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYDIR__CTOR_OFFSET))(this);
		}

		::MoleMole::Vector2Int Invoke(::MoleMole::Vector2Int startIndex, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir dir, ::System::Int32 distance)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYDIR_INVOKE_OFFSET))(this, startIndex, dir, distance);
		}
	};
}
