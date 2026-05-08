#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/HollowSystemStateType.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETHOLLOWSYSTEMSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18218710)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETHOLLOWSYSTEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18218800)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETHOLLOWSYSTEMSTATE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x18218840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetHollowSystemState_TypeDefinitionIndex = 81121;

	class LD_SetHollowSystemState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* In; // 0xA8
		::FlowCanvas::FlowOutput* Finish; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* SystemState; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETHOLLOWSYSTEMSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETHOLLOWSYSTEMSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETHOLLOWSYSTEMSTATE__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
