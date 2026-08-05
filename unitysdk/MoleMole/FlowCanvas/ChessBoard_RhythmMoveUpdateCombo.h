#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B953990)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B953A80)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_RhythmMoveUpdateCombo_TypeDefinitionIndex = 66870;

	class ChessBoard_RhythmMoveUpdateCombo : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 combo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATECOMBO_INVOKE_OFFSET))(this, combo);
		}
	};
}
