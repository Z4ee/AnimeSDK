#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1A9990D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A998C30)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_RESETCOUNT_OFFSET UNITYSDK_OFFSET(0x1A998F20)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_START_OFFSET UNITYSDK_OFFSET(0x1A998F70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_STOP_OFFSET UNITYSDK_OFFSET(0x1A998E80)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A999240)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A999280)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_1_OFFSET UNITYSDK_OFFSET(0x1A9992B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_2_OFFSET UNITYSDK_OFFSET(0x1A9992E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_3_OFFSET UNITYSDK_OFFSET(0x1A999310)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_4_OFFSET UNITYSDK_OFFSET(0x1A999320)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardTimerNode_TypeDefinitionIndex = 43692;

	class ChessboardTimerNode : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _then; // 0xA8
		::FlowCanvas::FlowInput* _pause; // 0xB0
		::FlowCanvas::FlowInput* _start; // 0xB8
		::FlowCanvas::FlowOutput* _update; // 0xC0
		::FlowCanvas::FlowOutput* _finish; // 0xC8
		::FlowCanvas::FlowInput* _advance; // 0xD0
		::FlowCanvas::ValueOutput_1<::System::Single>* _totalTime; // 0xD8
		::FlowCanvas::FlowInput* _stop; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* _inTotalTime; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Single>* _leftTime; // 0xF0
		::FlowCanvas::FlowInput* _resume; // 0xF8
		::System::Boolean inCounting; // 0x100
		::System::Single _leftTimeValue; // 0x104
		::System::Single _totalTimeValue; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Stop(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_STOP_OFFSET))(this, flow);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_START_OFFSET))(this, flow);
		}

		::System::Void Advance(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_ADVANCE_OFFSET))(this, flow);
		}

		::System::Void ResetCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_RESETCOUNT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__14_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_2_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__14_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_3_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__14_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_4_OFFSET))(this);
		}
	};
}
