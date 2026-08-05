#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroup_StateGroupKeyValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_BEGIN_OFFSET UNITYSDK_OFFSET(0x1B1A3DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B1A3CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A4080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B1A40C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetInLevelStateGroup_TypeDefinitionIndex = 90383;

	class LDSetInLevelStateGroup : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*>* stateGroups; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
