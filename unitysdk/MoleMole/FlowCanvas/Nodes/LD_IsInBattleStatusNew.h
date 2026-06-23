#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x11615470)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11615340)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW__CTOR_OFFSET UNITYSDK_OFFSET(0x11615740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x11615780)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x11615790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IsInBattleStatusNew_TypeDefinitionIndex = 49250;

	class LD_IsInBattleStatusNew : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _inputEntity; // 0xB0
		::System::Boolean _isInBattleStatus; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW_INVOKE_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__3_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW__REGISTERPORTS_B__3_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISINBATTLESTATUSNEW__REGISTERPORTS_B__3_1_OFFSET))(this, flow);
		}
	};
}
