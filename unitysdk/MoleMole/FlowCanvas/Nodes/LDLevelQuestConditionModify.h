#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class LevelQuestConditionModifyData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY_BEGIN_OFFSET UNITYSDK_OFFSET(0x1B8334B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B833370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B833C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B833C70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelQuestConditionModify_TypeDefinitionIndex = 55233;

	class LDLevelQuestConditionModify : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* input; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LevelQuestConditionModifyData*>*>* successConditions; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* levelQuestID; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LevelQuestConditionModifyData*>*>* failConditions; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTCONDITIONMODIFY__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}
	};
}
