#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVERWITHINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B598FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVERWITHINFO_MODIFYPLAYERPOS_OFFSET UNITYSDK_OFFSET(0x1B599170)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVERWITHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B599540)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int Chessboard_SendToServerWithInfo_TypeDefinitionIndex = 69133;

	class Chessboard_SendToServerWithInfo : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::Vector2Int, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVERWITHINFO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Vector2Int PlayerPos, ::System::Boolean ResetServerPlayerPos)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVERWITHINFO_INVOKE_OFFSET))(this, PlayerPos, ResetServerPlayerPos);
		}

		::System::Void ModifyPlayerPos(::MoleMole::Vector2Int playerPos)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVERWITHINFO_MODIFYPLAYERPOS_OFFSET))(this, playerPos);
		}
	};
}
