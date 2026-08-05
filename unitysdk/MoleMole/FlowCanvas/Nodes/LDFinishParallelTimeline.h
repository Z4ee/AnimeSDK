#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x144BED70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE_TRYCALLOUTPUT_OFFSET UNITYSDK_OFFSET(0x144BEE60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x144BEEF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x144BEF30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFinishParallelTimeline_TypeDefinitionIndex = 57978;

	class LDFinishParallelTimeline : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _customTag; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void TryCallOutput(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE_TRYCALLOUTPUT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHPARALLELTIMELINE__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
