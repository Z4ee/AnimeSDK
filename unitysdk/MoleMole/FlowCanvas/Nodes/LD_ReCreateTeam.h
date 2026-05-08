#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_PROCESS_OFFSET UNITYSDK_OFFSET(0x16E53A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16E539D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16E53D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x16E53D70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReCreateTeam_TypeDefinitionIndex = 62325;

	class LD_ReCreateTeam : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOutput; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_PROCESS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}
	};
}
