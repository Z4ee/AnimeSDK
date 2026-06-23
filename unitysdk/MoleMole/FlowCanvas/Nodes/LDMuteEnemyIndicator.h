#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x151146A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x151145B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15114BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x15114BE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMuteEnemyIndicator_TypeDefinitionIndex = 64894;

	class LDMuteEnemyIndicator : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* muteStateInput; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
