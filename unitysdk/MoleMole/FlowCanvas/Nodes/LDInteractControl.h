#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13A82F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL_START_OFFSET UNITYSDK_OFFSET(0x13A83090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL__CONTROLINTERACT_OFFSET UNITYSDK_OFFSET(0x13A833B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x13A83680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x13A836C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInteractControl_TypeDefinitionIndex = 56697;

	class LDInteractControl : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* Pause; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* controlEntity; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL_START_OFFSET))(this, f);
		}

		::System::Void _ControlInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL__CONTROLINTERACT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTCONTROL__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
