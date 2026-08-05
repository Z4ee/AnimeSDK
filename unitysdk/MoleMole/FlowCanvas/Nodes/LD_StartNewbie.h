#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13A8EAB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8EC10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x13A8EC50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x13A8EF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__REGISTERPORTS_B__6_2_OFFSET UNITYSDK_OFFSET(0x13A8EF90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartNewbie_TypeDefinitionIndex = 80508;

	class LD_StartNewbie : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _finishCall; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* _newbieCheckIndex; // 0xB8
		::FlowCanvas::FlowOutput* _closeCall; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _doPauseGame; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* _newbieConfigID; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__REGISTERPORTS_B__6_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__REGISTERPORTS_B__6_1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTNEWBIE__REGISTERPORTS_B__6_2_OFFSET))(this);
		}
	};
}
