#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV3_INVOKE_OFFSET UNITYSDK_OFFSET(0x154059D0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV3__CTOR_OFFSET UNITYSDK_OFFSET(0x15405C60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPiecePlayEffectByKeyV3_TypeDefinitionIndex = 59241;

	class ChessboardPiecePlayEffectByKeyV3 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_4<::System::String*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV3__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* effectKey, ::MoleMole::HollowChessboard::HollowCell cell, ::System::Boolean stopAllBeforePlay, ::System::Boolean muteAudio)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV3_INVOKE_OFFSET))(this, effectKey, cell, stopAllBeforePlay, muteAudio);
		}
	};
}
