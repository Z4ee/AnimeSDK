#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessShowUIView_CanvasRTParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D326B0)
#define MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D32B20)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessShowUIView_TypeDefinitionIndex = 78960;

	class ChessShowUIView : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams canvasRTParams)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSSHOWUIVIEW_INVOKE_OFFSET))(this, canvasRTParams);
		}
	};
}
