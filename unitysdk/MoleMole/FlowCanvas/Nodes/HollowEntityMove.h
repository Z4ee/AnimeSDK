#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x1382DEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE_INVOKES_OFFSET UNITYSDK_OFFSET(0x1382E0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1382DE40)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1382E120)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityMove_TypeDefinitionIndex = 75251;

	class HollowEntityMove : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd moveCmd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE_INVOKE_OFFSET))(this, entityRuntimeID, moveCmd);
		}

		static ::System::Void InvokeS(::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd moveCmd)
		{
			return ((::System::Void(*)(::System::UInt32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE_INVOKES_OFFSET))(entityRuntimeID, moveCmd);
		}

		static ::System::Void InvokeInner(::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd moveCmd)
		{
			return ((::System::Void(*)(::System::UInt32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVE_INVOKEINNER_OFFSET))(entityRuntimeID, moveCmd);
		}
	};
}
