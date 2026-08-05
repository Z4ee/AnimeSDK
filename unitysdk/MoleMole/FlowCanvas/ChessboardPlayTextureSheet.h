#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEET_INVOKE_OFFSET UNITYSDK_OFFSET(0x12986F20)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x12987170)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlayTextureSheet_TypeDefinitionIndex = 78732;

	class ChessboardPlayTextureSheet : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_5<::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::HollowPieceBlendMode>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEET__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::HollowChessboard::HollowCell cell, ::System::String* key, ::System::Int32 priority, ::System::Int32 screenIndex, ::MoleMole::HollowPieceBlendMode blendMode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEET_INVOKE_OFFSET))(this, cell, key, priority, screenIndex, blendMode);
		}
	};
}
