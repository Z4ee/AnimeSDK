#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::FlowCanvas::Nodes { class ChessboardIconAnimAdditive_AdditiveParam; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x144B9780)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x144B9D60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimAdditive_TypeDefinitionIndex = 68464;

	class ChessboardIconAnimAdditive : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::MoleMole::HollowChessboard::RenderDataHandle, ::System::Int32, ::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimAdditive_AdditiveParam*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::RenderDataHandle Invoke(::System::Int32 index, ::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimAdditive_AdditiveParam* additiveParam)
		{
			return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::System::Int32, ::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimAdditive_AdditiveParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE_INVOKE_OFFSET))(this, index, additiveParam);
		}
	};
}
