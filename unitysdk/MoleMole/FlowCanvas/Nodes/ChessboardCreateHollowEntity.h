#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEHOLLOWENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A38810)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEHOLLOWENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18A389C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCreateHollowEntity_TypeDefinitionIndex = 40538;

	class ChessboardCreateHollowEntity : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::UInt32, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEHOLLOWENTITY__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke(::System::Int32 npcTemplateId, ::MoleMole::HollowChessboard::HollowCell pos)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEHOLLOWENTITY_INVOKE_OFFSET))(this, npcTemplateId, pos);
		}
	};
}
