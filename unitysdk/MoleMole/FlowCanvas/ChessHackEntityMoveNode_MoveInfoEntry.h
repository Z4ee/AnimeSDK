#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_MOVEINFOENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x88EE50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHackEntityMoveNode_MoveInfoEntry_TypeDefinitionIndex = 82868;

	struct alignas(4) ChessHackEntityMoveNode_MoveInfoEntry
	{
		::MoleMole::HollowChessboard::HollowCell preCell; // 0x10
		::MoleMole::HollowChessboard::HollowCell predictionCell; // 0x1C
		::Share::GridDir dir; // 0x28

		::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell preCell, ::MoleMole::HollowChessboard::HollowCell predictionCell)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_MOVEINFOENTRY__CTOR_OFFSET))(this, preCell, predictionCell);
		}
	};
}
