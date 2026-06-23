#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_FCAF801AC482D3B5;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x16C9D870)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET UNITYSDK_OFFSET(0x16C9DB20)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x16C9D790)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9DBA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityJumpToIndex_TypeDefinitionIndex = 50958;

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

		static ::System::Void InvokeS(::Class_5_FCAF801AC482D3B5* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_FCAF801AC482D3B5*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::Class_5_FCAF801AC482D3B5* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::Class_5_FCAF801AC482D3B5*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
