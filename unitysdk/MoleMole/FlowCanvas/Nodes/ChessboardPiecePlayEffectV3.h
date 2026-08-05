#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV3_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B0D20)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV3__CTOR_OFFSET UNITYSDK_OFFSET(0x118B0E80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPiecePlayEffectV3_TypeDefinitionIndex = 82104;

	class ChessboardPiecePlayEffectV3 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::String*, ::MoleMole::HollowChessboard::HollowCell>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV3__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* effectPath, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV3_INVOKE_OFFSET))(this, effectPath, cell);
		}
	};
}
