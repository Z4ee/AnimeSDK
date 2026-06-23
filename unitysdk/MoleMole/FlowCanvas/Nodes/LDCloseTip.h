#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIBubbleTips; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB1140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB1280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP__GETCREATEDTIPOBJECT_OFFSET UNITYSDK_OFFSET(0x12BB1230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x12BB12C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCloseTip_TypeDefinitionIndex = 71380;

	class LDCloseTip : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::MoleMole::UIBubbleTips* _bubbleTip; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::UIBubbleTips* _GetCreatedTipObject()
		{
			return ((::MoleMole::UIBubbleTips*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP__GETCREATEDTIPOBJECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSETIP__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
