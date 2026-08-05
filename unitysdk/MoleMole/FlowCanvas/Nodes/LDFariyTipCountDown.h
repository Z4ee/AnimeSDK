#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class UIBubbleTips; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x144BE6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x144BE880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN__GETCREATEDTIPOBJECT_OFFSET UNITYSDK_OFFSET(0x144BE830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x144BE8C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFariyTipCountDown_TypeDefinitionIndex = 42351;

	class LDFariyTipCountDown : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::MoleMole::UIBubbleTips* _bubbleTip; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::UIBubbleTips*>* tipObjectOut; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* seconds; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xC8
		::FlowCanvas::FlowOutput* finish; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::UIBubbleTips* _GetCreatedTipObject()
		{
			return ((::MoleMole::UIBubbleTips*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN__GETCREATEDTIPOBJECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}
	};
}
