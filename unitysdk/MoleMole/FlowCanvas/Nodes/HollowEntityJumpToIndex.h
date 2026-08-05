#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_DCFF91E03A93C03C;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x13A80890)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET UNITYSDK_OFFSET(0x13A80B40)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A807B0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x13A80BC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityJumpToIndex_TypeDefinitionIndex = 47082;

	class HollowEntityJumpToIndex : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::UInt32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKE_OFFSET))(this, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeS(::Class_5_DCFF91E03A93C03C* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_DCFF91E03A93C03C*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::Class_5_DCFF91E03A93C03C* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_DCFF91E03A93C03C*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
