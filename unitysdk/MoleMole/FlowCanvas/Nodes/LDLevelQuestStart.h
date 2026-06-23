#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_BEGIN_OFFSET UNITYSDK_OFFSET(0x1580E580)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1580E430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1580E880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1580E8C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelQuestStart_TypeDefinitionIndex = 42445;

	class LDLevelQuestStart : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* cancelOutput; // 0xA8
		::FlowCanvas::FlowOutput* failOutput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* LevelQuestID; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::FlowInput* input; // 0xC8
		::FlowCanvas::FlowOutput* succeedOutput; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
