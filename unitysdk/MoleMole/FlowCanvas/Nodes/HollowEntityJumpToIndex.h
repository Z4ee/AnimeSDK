#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_AF65C3A968E836D2;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x18A38DD0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET UNITYSDK_OFFSET(0x18A39080)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A38CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityJumpToIndex_TypeDefinitionIndex = 47522;

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

		static ::System::Void InvokeS(::Class_5_AF65C3A968E836D2* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::Class_5_AF65C3A968E836D2* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
