#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowNestedBase_1.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree; }
namespace NodeCanvas::DialogueTrees { class IDialogueActor; }

#define FLOWCANVAS_NODES_FLOWNESTEDDT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7DFC0)
#define FLOWCANVAS_NODES_FLOWNESTEDDT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7E050)
#define FLOWCANVAS_NODES_FLOWNESTEDDT__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1EB7E0E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedDT_TypeDefinitionIndex = 29738;

	class FlowNestedDT : public ::FlowCanvas::Nodes::FlowNestedBase_1<::NodeCanvas::DialogueTrees::DialogueTree*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDDT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDDT_REGISTERPORTS_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::IDialogueActor* _RegisterPorts_b__0_0()
		{
			return ((::NodeCanvas::DialogueTrees::IDialogueActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDDT__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
