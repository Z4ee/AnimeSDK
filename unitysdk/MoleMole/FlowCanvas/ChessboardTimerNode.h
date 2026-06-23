#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x10D349B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D34510)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_RESETCOUNT_OFFSET UNITYSDK_OFFSET(0x10D34800)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_START_OFFSET UNITYSDK_OFFSET(0x10D34850)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE_STOP_OFFSET UNITYSDK_OFFSET(0x10D34760)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D34B20)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x10D34B60)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_1_OFFSET UNITYSDK_OFFSET(0x10D34B90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_2_OFFSET UNITYSDK_OFFSET(0x10D34C60)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_3_OFFSET UNITYSDK_OFFSET(0x10D34C90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTIMERNODE__REGISTERPORTS_B__14_4_OFFSET UNITYSDK_OFFSET(0x10D34CA0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardTimerNode_TypeDefinitionIndex = 75352;

	class ChessboardTimerNode : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::FlowInput* _start; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Single>* _totalTime; // 0xB0
		::FlowCanvas::FlowInput* _pause; // 0xB8
		::FlowCanvas::FlowOutput* _update; // 0xC0
		::FlowCanvas::FlowInput* _resume; // 0xC8
		::FlowCanvas::FlowInput* _stop; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Single>* _inTotalTime; // 0xD8
		::FlowCanvas::FlowInput* _advance; // 0xE0
		::FlowCanvas::ValueOutput_1<::System::Single>* _leftTime; // 0xE8
		::FlowCanvas::FlowOutput* _finish; // 0xF0
		::FlowCanvas::FlowOutput* _then; // 0xF8
		::System::Single _leftTimeValue; // 0x100
		::System::Single _totalTimeValue; // 0x104
		::System::Boolean inCounting; // 0x108

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
