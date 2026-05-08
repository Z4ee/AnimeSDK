#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_AF65C3A968E836D2;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x1173AC00)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKES_OFFSET UNITYSDK_OFFSET(0x1173B060)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1173AB20)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1173B0E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityMoveToPosition_TypeDefinitionIndex = 64445;

	class HollowEntityMoveToPosition : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::System::UInt32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKE_OFFSET))(this, entityRuntimeID, x, y);
		}

		static ::System::Void InvokeS(::Class_5_AF65C3A968E836D2* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::Class_5_AF65C3A968E836D2* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
