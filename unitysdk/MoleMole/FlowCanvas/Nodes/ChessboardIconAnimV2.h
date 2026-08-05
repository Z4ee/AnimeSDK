#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::FlowCanvas::Nodes { class ChessboardIconAnimV2_IconAnimItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_CHECKRENDERSTATEENABLE_OFFSET UNITYSDK_OFFSET(0x118B0580)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_GET_RENDERDATAHANDLELIST_OFFSET UNITYSDK_OFFSET(0x118B0470)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B0860)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2__CTOR_OFFSET UNITYSDK_OFFSET(0x118B0C90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimV2_TypeDefinitionIndex = 79984;

	class ChessboardIconAnimV2 : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::MoleMole::HollowChessboard::RenderDataHandle, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimV2_IconAnimItem*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* get_RenderDataHandleList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_GET_RENDERDATAHANDLELIST_OFFSET))(this);
		}

		::System::Boolean CheckRenderStateEnable(::MoleMole::HollowChessboard::HollowChessboardUID sectionID, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_CHECKRENDERSTATEENABLE_OFFSET))(this, sectionID, cell);
		}

		::MoleMole::HollowChessboard::RenderDataHandle Invoke(::System::Int32 index, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimV2_IconAnimItem*>* chessBoardIconAnimGroup)
		{
			return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimV2_IconAnimItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_INVOKE_OFFSET))(this, index, chessBoardIconAnimGroup);
		}
	};
}
