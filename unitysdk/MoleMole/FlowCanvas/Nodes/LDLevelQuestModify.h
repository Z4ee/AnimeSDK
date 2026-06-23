#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Battle/LevelQuestOperation.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY_BEGIN_OFFSET UNITYSDK_OFFSET(0x12BB4850)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB4740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB4B50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x12BB4B90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelQuestModify_TypeDefinitionIndex = 85318;

	class LDLevelQuestModify : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* input; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::LevelQuestOperation>* modifyType; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* levelQuestID; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTMODIFY__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
