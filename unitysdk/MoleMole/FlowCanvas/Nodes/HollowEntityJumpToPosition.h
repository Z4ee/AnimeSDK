#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_AF65C3A968E836D2;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x16E42C20)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKES_OFFSET UNITYSDK_OFFSET(0x16E42ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E42B40)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16E42F50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityJumpToPosition_TypeDefinitionIndex = 54206;

	class HollowEntityJumpToPosition : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::System::UInt32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKE_OFFSET))(this, entityRuntimeID, x, y);
		}

		static ::System::Void InvokeS(::Class_5_AF65C3A968E836D2* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::Class_5_AF65C3A968E836D2* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
