#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1382E140)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1382E5F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityPredictMove_TypeDefinitionIndex = 45358;

	class HollowEntityPredictMove : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::Int32, ::System::UInt32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd moveCmd)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVE_INVOKE_OFFSET))(this, entityRuntimeID, moveCmd);
		}
	};
}
