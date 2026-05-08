#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_B0877C107BC7F2BF;
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14286E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__CALLBACK_OFFSET UNITYSDK_OFFSET(0x14286F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__CTOR_OFFSET UNITYSDK_OFFSET(0x14286FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x14287000)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__REGISTERPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0x14287190)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_WaitQTE_TypeDefinitionIndex = 44114;

	class LD_WaitQTE : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _Callback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__CALLBACK_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__REGISTERPORTS_B__1_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__1_1(::Class_1_B0877C107BC7F2BF* t)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAITQTE__REGISTERPORTS_B__1_1_OFFSET))(this, t);
		}
	};
}
