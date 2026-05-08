#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

class Class_5_AF65C3A968E836D2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CHESSPIECEDATA_OFFSET UNITYSDK_OFFSET(0x18A37200)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x18A370F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A37310)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCallableActionNode_TypeDefinitionIndex = 41470;

	class ChessboardCallableActionNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE__CTOR_OFFSET))(this);
		}

		::Class_5_AF65C3A968E836D2* get_CurrentChessboard()
		{
			return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* get_ChessPieceData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CHESSPIECEDATA_OFFSET))(this);
		}
	};
}
