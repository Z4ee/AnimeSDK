#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessShowUIView_MiniGameUIType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessShowUIView_CanvasRTParams_TypeDefinitionIndex = 78961;

	struct alignas(8) ChessShowUIView_CanvasRTParams
	{
		::System::Int32 pieceIndex; // 0x10
		::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType uiType; // 0x14
		::MoleMole::Vector2Int rtSize; // 0x18
		::System::String* backgroundTextureSheetKey; // 0x20
		::MoleMole::UIControllerContextBase* context; // 0x28
	};
}
