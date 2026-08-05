#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

class Class_5_DCFF91E03A93C03C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFLOWNODE_GET_CHESSPIECEDATA_OFFSET UNITYSDK_OFFSET(0x118AAD90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFLOWNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x118AAC90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x118AAE90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardFlowNode_TypeDefinitionIndex = 84213;

	class ChessboardFlowNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFLOWNODE__CTOR_OFFSET))(this);
		}

		::Class_5_DCFF91E03A93C03C* get_CurrentChessboard()
		{
			return ((::Class_5_DCFF91E03A93C03C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFLOWNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* get_ChessPieceData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFLOWNODE_GET_CHESSPIECEDATA_OFFSET))(this);
		}
	};
}
