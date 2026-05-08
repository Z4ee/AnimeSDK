#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole { class UIHollowChessPieceParticle; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV4_INVOKE_OFFSET UNITYSDK_OFFSET(0x15405CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV4__CTOR_OFFSET UNITYSDK_OFFSET(0x15405F90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPiecePlayEffectByKeyV4_TypeDefinitionIndex = 47075;

	class ChessboardPiecePlayEffectByKeyV4 : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_5<::MoleMole::UIHollowChessPieceParticle*, ::System::String*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV4__CTOR_OFFSET))(this);
		}

		::MoleMole::UIHollowChessPieceParticle* Invoke(::System::String* effectKey, ::MoleMole::HollowChessboard::HollowCell cell, ::System::Boolean stopAllBeforePlay, ::System::Boolean muteAudio)
		{
			return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTBYKEYV4_INVOKE_OFFSET))(this, effectKey, cell, stopAllBeforePlay, muteAudio);
		}
	};
}
