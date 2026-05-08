#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class ValueInput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETLEVELSTATE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1841AC40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETLEVELSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1841AA00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETLEVELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1841B240)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetLevelState_TypeDefinitionIndex = 79908;

	class LDSetLevelState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput* inputValue; // 0xB0
		::FlowCanvas::FlowInput* beginFlowInput; // 0xB8
		::MoleMole::LevelStateDefine_ELevelStateName LevelStateName; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETLEVELSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETLEVELSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETLEVELSTATE_BEGIN_OFFSET))(this, f);
		}
	};
}
