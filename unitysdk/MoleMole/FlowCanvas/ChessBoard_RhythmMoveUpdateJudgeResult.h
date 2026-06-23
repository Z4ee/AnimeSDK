#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardRhythmMoveInputHandler_JudgeResult.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x161CD1F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x161CD320)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_RhythmMoveUpdateJudgeResult_TypeDefinitionIndex = 73927;

	class ChessBoard_RhythmMoveUpdateJudgeResult : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult JudgeResult)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_RHYTHMMOVEUPDATEJUDGERESULT_INVOKE_OFFSET))(this, JudgeResult);
		}
	};
}
