#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_DCFF91E03A93C03C;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x1298AFF0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKES_OFFSET UNITYSDK_OFFSET(0x1298B450)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1298AF10)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1298B4D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityMoveToPosition_TypeDefinitionIndex = 49277;

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

		static ::System::Void InvokeS(::Class_5_DCFF91E03A93C03C* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_DCFF91E03A93C03C*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::Class_5_DCFF91E03A93C03C* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_DCFF91E03A93C03C*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
