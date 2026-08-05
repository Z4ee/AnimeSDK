#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardRhythmMoveInputHandler_JudgeResult.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_INPUT_OFFSET UNITYSDK_OFFSET(0x19B063A0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19B061A0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B069B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__REGISTERPORTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x19B069F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRhythmMoveInputHandler_TypeDefinitionIndex = 80433;

	class ChessboardRhythmMoveInputHandler : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* perfect; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Single>* preJudgeTime; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* perfectTolerance; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Single>* nextJudgeTime; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* judgeOffsetTime; // 0xD0
		::FlowCanvas::FlowOutput* normal; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Single>* normalTolerance; // 0xE0
		::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* judgeResult; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Single>* currentTime; // 0xF0
		::FlowCanvas::FlowOutput* miss; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Input(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER_INPUT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__12_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRHYTHMMOVEINPUTHANDLER__REGISTERPORTS_B__12_0_OFFSET))(this, f);
		}
	};
}
