#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EE0106BAC68200BB_Enum_3_6E4FEE55A8C64FCB.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11615890)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__CTOR_OFFSET UNITYSDK_OFFSET(0x11615980)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x116159D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SendEventToFC_TypeDefinitionIndex = 72961;

	class LD_SendEventToFC : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* eventName; // 0xB0
		::Class_2_EE0106BAC68200BB_Enum_3_6E4FEE55A8C64FCB SendTarget; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
